#include <iostream>

using namespace std;

int menor(int v[], int j) {
    if(j==0) return v[j];
    int tmp = menor(v,j-1);
    if (v[j] < tmp) return v[j];
    else return tmp;

}

int main()
{
    int v[10] = {4, -5, 7, 9, -10, 8, 3, 67, 5, 23};
    cout << menor(v, 9) << endl;
    return 0;
}
