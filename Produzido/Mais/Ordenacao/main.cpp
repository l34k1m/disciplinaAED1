#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    while (true) {
        cin >> n;
        if (n==0) break;
        bool ord = true;
        cin >> y;
        for (int i=1; i<n; i++) {
            cin >> x;
            if (x<y) ord = false;
            y = x;
        }
        if (ord) cout << "sim\n";
        else cout << "nao\n";
    }
    return 0;
}
