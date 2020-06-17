#include <iostream>

using namespace std;

bool palindromo (string str, int i, int f) {
    if (f<=i) return true;
    return(str[i] == str[f] && palindromo(str, i+1, f-1));
}

int main()
{
    string entrada;
    cout << "Entre com a palavra: " << endl;
    cin >> entrada;
    cout << palindromo(entrada, 0, entrada.length()-1);
    return 0;
}
