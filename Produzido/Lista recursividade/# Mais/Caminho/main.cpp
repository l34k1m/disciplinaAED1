#include <iostream>

using namespace std;

bool caminho (char m[6][6], int i, int j) {
    if (m[i][j] == 'X') {
        cout << i << "," << j << "_";
        return true;
    } if (m[i][j] == '0') return false;
}

int main()
{
    char m[6][6];
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin >> m[i][j];
        }
    }
    imprime (m, 0, 0);
    return 0;
}
