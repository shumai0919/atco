#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s; cin >> s;
    int n; cin >> n;
    for (int i = n; i < s.length() - n; i++) cout << s[i];
}