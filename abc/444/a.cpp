#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, a, b;    
    cin >> n;
    a = n / 100;
    b = 100;
    for (int i = 0; i < 3; i++) {
        if (n / b != a) {
            cout << "No" << endl;
            return 0;
        }
        n = n - a * b;
        b = b / 10;
    }
    cout << "Yes" << endl;
    return 0;
}