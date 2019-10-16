#include <stdio.h>
#include <stdlib.h>

int main() {
    int pos1;
    int pos2;

    scanf("%d", &pos1);
    scanf("%d", &pos2);

    int cansaco1 = 0;
    int cansaco2 = 0;

    int aux1 = 1, aux2 = 1;

    while(pos1 != pos2) {
        if (pos1 < pos2) {
            pos1++;
            cansaco1+=aux1;
            aux1++;
            if (pos1 == pos2)
                break;
            pos2--;
            cansaco2+=aux2;
            aux2++;
        }
        else {
            pos1--;
            cansaco1+=aux1;
            aux1++;
            if (pos1 == pos2)
                break;
            pos2++;
            cansaco2+=aux2;
            aux2++;
        }
    }

    printf("%d", cansaco1+cansaco2);

    return 0;
}