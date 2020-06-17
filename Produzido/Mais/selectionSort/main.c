#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=10, conjunto[quantidade], i, j, menor, maior; //máximo: 520599
    for (i=0;i<quantidade;i++) {
        printf("Informe numero: ");
        scanf("%d", &conjunto[i]);
    }
    for (i=1;i<quantidade;i++) {
            for (j=i;j>0;j--) {
                if (conjunto[j]<conjunto[j-1]) {
                    menor = conjunto[j];
                    maior = conjunto[j-1];
                    conjunto[j] = maior;
                    conjunto [j-1] = menor;
                }
            }
    }
    printf("A sequencia obtida a partir dos numeros informados e: ");
    for (i=0;i<quantidade;i++) {
        printf("%d, ", conjunto[i]);
    }
    return 0;
}
