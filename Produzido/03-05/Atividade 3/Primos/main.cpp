#include <iostream>

using namespace std;

int main()
{
    long int numero, metade;
    short int divisores = 0, i, resto;
    cin >> numero;
    metade = numero / 2;
    if (numero==-1 || numero==0 || numero==1) {
        cout << "nao";
    } else {
        for (i=1;i<=metade;i++) {
            resto = numero % i;
            if (resto==0) {
                divisores++;
            }
        }
        if (divisores!=1) {
            cout << "nao";
        } else {
            cout << "sim";
        }
    }

    return 0;
}
