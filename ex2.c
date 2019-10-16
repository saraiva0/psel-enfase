#include <stdio.h>
#include <stdlib.h>

int checa_vencedor(char t[3][3]) {
    for (int i = 0; i < 3; i++) {
        if ((t[i][0] == 'X') && (t[i][1] == 'X') && (t[i][2] == 'X')) {
            return 1;
        }
            
        if ((t[i][0] == '0') && (t[i][1] == '0') && (t[i][2] == '0')) {
            return 2;
        }
    }

    for (int i = 0; i < 3; i++) {
        if ((t[0][i] == 'X') && (t[1][i] == 'X') && (t[2][i] == 'X')) {
            return 1;
        }
        if ((t[0][i] == '0') && (t[1][i] == '0') && (t[2][i] == '0')) {
            return 2;
        }
    }

    if ((t[0][0] == 'X') && (t[1][1] == 'X') && (t[2][2] == 'X')) {
       return  1;
    }
    if ((t[0][0] == '0') && (t[1][1] == '0') && (t[2][2] == '0')) {
        return  2;
    }
    if ((t[0][2] == 'X') && (t[1][1] == 'X') && (t[2][0] == 'X')) {
        return  1;
    }
    if ((t[0][2] == '0' && t[1][1] == '0' && t[2][0] == '0')) {
        return  2;
    }
    return 0;

}

int main() {
    char tabuleiro[3][3];
    int nX = 0;
    int n0 = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &tabuleiro[i]);
        for (int j = 0; j < 3; j++)
        {
            if (tabuleiro[i][j] == 'X')
            {
                nX++;
            }
            else if(tabuleiro[i][j] == '0') {
                n0++;
            }            
        }
        
    }

    int vencedor = checa_vencedor(tabuleiro);

    if (vencedor == 1)
    {
        printf("primeiro_venceu");
        return 0;
    }
    else if (vencedor == 2) {
        printf("segundo_venceu");
        return 0;
    }
    else if ((nX > n0) && nX < 5) {
        printf("segundo");
        return 0;
    }
    else if ((nX == n0)) {
        printf("primeiro");
        return 0;
    }
    else if (n0 > nX) {
        printf("inválido");
        return 0;
    }
    
    printf("empate");  
    return 0;
}