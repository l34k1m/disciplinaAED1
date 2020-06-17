#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, escolha;
    double *memoria = (double*) malloc(1250000 * sizeof(double));
    double *ponteiro = memoria;
    printf("1 - Iniciar escrita de zeros; 2 - Sair:");
    scanf("%d", &escolha);
    if (escolha == 2) {
        return 0;
    } else {
        if (*memoria != NULL) {
            for (i=1;i<1250001;i++) {
                *ponteiro = 0;
                printf("%.0f (%d)\n", *ponteiro, i);
                ponteiro++;
            }
        }
    }
    return 1;
    exit(0);
}
