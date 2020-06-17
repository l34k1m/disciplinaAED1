#include <iostream>

using namespace std;

void hanoi (int n, int origem, int fim, int auxiliar) {
    if (n==1) { // Caso basico (menor problema possivel)
        cout << "Mover disco de " << origem << " para " << fim << endl;
        return;
    }
    hanoi(n-1, origem, auxiliar, fim);
    cout << "Mover disco de " << origem << " para " << fim << endl;
    hanoi(n-1, auxiliar, fim, origem);
}

int main()
{
    int n = 0;
    cout << "Informe quantidade de pecas da torre: " << endl;
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}
