#include <iostream>

using namespace std;

void inverte(int vetor[], int pos) {
    if(pos==0){
        cout << vetor[pos];
        return;
    }
    else {
        cout << vetor[pos] << ", ";
        inverte(vetor, pos-1);
    }
}

int main()
{
    int vet[5] = {1,3,5,7,9};
    inverte(vet, 4);
    return 0;
}
