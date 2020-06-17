#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int comprimento=64, tamanho, metade, i, j, parIgual = 0;
    char palavra[comprimento];
    printf("Informe palavra: ");
    scanf("%s", palavra);
    for (i=0;i<comprimento;i++) {
        if (palavra[i] == 0) {
            tamanho = i;
            break;
        }
    }
    j=tamanho-1;
    metade = tamanho/2;
    //printf("Tamanho: %d\tMetade inteira: %d\n", tamanho, metade);
	for (i=0;i<metade;i++) {
           if (j>=metade) {
               //printf("|%d (%c), %d (%c)|\n", i, palavra[i], j, palavra[j]);
                    if (palavra[i] == palavra[j]) {
                        parIgual++;
                    }
            j--;
            } else {
                printf("\nProblema");
            }

	}
	printf("Espelhamentos: %d", parIgual);
    if (parIgual == metade) {
        printf("\nE um palindromo");
    } else {
            printf("\nNao e um palindromo");
        }
    return 0;
}
