#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double *ponteiro;
    ponteiro = &x;
    *ponteiro = 2015.1521; //altera valor da variável x por meio do ponteiro
    printf("%f\n", x); //mostra conteúdo de x
    printf("%d\n", sizeof(*ponteiro)); //verifica o tamanho da variável ponteiro
    printf("%p\n", ponteiro); //mostra endereço armazenado pelo ponteiro
    printf("%p", ++ponteiro); //mostra endereço do próximo bloco de memória de mesmo tamanho da variável ponteiro
    return 0;
}
