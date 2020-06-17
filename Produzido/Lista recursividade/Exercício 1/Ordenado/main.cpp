#include <iostream>

using namespace std;

bool ordenado(int v[], int j) {
    if(j==0) return true;
        return (ordenado(v,j-1) && (v[j] >= v[j-1]));
}

int main()
{
    int v[4] = {1, 2, 4, 7};
    cout << ordenado(v, 3) << endl;
    return 0;
}
