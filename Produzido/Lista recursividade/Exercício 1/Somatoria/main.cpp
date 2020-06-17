#include <iostream>

using namespace std;

int somatoria (int n) {
    if (n==0) return 0;
    else return (n+somatoria(n-1));
}

int main()
{

    cout <<  somatoria(3) << endl;
    return 0;
}
