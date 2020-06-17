#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double *parcela = (double*) malloc(1000000 * sizeof(double));
    double *ponteiro = parcela;
    if (parcela != NULL) {
        printf("Fibonacci...\n\n");
        *ponteiro = 0;
        printf("Numero 1: %.0f\n", *ponteiro);
        ponteiro++;
        *ponteiro = 1;
        printf("Numero 2: %.0f\n", *ponteiro);
        ponteiro++;
        for (i=0;i<1000000;i++) {
            ponteiro--;
            ponteiro--;
            double penultimo = *ponteiro;
            ++ponteiro;
            double ultimo = *ponteiro;
            ++ponteiro;
            *ponteiro = ultimo + penultimo;

            printf("Numero %d: %.0f\n", i+2, *ponteiro);
            ++ponteiro;
        }
    }
    free(parcela);
    return(0);
}
