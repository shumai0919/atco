#include <bits/stdc++.h>
using namespace std;

int ketawa(int value){
    int sum = 0;
    while (value > 0) {
        sum += value % 10;
        value /= 10;
    }
    return sum;
}

int main(void) {
    int n,k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        if (ketawa(i) == k) {
            cout << i;
        }
    }
}
