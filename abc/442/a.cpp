#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string a;
    int sum = 0;
    cin >> a;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] == 'i' || a[i] == 'j') sum++;
    }
    cout << sum << endl;
}