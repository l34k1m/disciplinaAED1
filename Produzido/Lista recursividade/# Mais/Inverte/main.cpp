#include <iostream>

using namespace std;

void inverte (int v[], int i, int j) {
    if (i==1) return;
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    inverte (v, i+1, j-1);
}

int main()
{
    int v[5] = {1, 3, 5, 7, 9};
    inverte(v, 0, 4);
    for (int i=0; i<=4;i++) {
        cout << v[i];
    }
    return 0;
}
