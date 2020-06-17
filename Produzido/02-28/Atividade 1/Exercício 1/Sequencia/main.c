#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i=0, desordem=0;
    printf("Informe a quantidade de numeros a ser informada: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (i;i<tamanho;i++) {
        printf("Informe numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i=0;i<tamanho-1;i++) {
        if (vetor[i] > vetor[i+1]) {
            desordem++;
            break;
        }
    }
    if (desordem == 0) {
        printf("Esta ordenado");
    } else {
        printf("Nao esta ordenado");
    }
    return 0;
}
