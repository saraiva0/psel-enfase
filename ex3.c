#include <stdio.h>
#include <stdlib.h>

int tem_na_sequencia(int v[], int n, int x) {
    for (int i = 0; i < n; i++)
    {
        if(v[i] == x)
         return 1;
    }
    return 0;
}

void ordena(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int f0 = 99999;
    int f1;

    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);        
    }

    ordena(v, n);

    int nmax = 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int n_aux = 2;
            int soma = 0;
            int f0 = v[i];
            int f1 = v[j];
            soma = v[i]+v[j];
            while (tem_na_sequencia(v, n, soma))
            {
                n_aux++;
                f0 = f1;
                f1 = soma;
                soma = f0 + f1;
            }
            if (n_aux > nmax)
            {
                nmax = n_aux;
            }                     
        }    
    }
    
    printf("%d", nmax);

    return 0;    
}