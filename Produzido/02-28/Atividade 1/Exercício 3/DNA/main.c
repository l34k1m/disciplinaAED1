#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 256, i, sequencia=0;
    char cadeia[tamanho];
    printf("Informe a cadeia de DNA: ");
    scanf("%s", cadeia);
    for (i=0;i<=tamanho-2;i++) {
        if (cadeia[i] == 'a' && cadeia[i+1] == 't' && cadeia[i+2] == 'g') {
            sequencia++;
        }
    }
    printf("A sequencia atg aparece %d vezes na sequencia", sequencia);
    return 0;
}
