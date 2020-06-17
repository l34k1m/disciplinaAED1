#include <iostream>

using namespace std;

int somaVetor (int vetor[], int len) {
    if (len==-1) return 0;
    else return (vetor[len]+somaVetor(vetor, len-1));
}

int main()
{
    int vet[5] = {1, 2, 2, 2, 2};
    cout <<  somaVetor(vet, 4) << endl;
    return 0;
}
