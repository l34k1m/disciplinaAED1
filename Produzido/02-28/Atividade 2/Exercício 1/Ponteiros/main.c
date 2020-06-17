#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    double *ponteiro;
    ponteiro = &x;
    *ponteiro = 2015.1521; //altera valor da vari�vel x por meio do ponteiro
    printf("%f\n", x); //mostra conte�do de x
    printf("%d\n", sizeof(*ponteiro)); //verifica o tamanho da vari�vel ponteiro
    printf("%p\n", ponteiro); //mostra endere�o armazenado pelo ponteiro
    printf("%p", ++ponteiro); //mostra endere�o do pr�ximo bloco de mem�ria de mesmo tamanho da vari�vel ponteiro
    return 0;
}
