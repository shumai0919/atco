#include <bits/stdc++.h>
using namespace std;

int ketasu (int value){
    int keta = 1;
    while (1) {
        if (value < 10) {
            return keta;
        }
        keta++;
        value = value / 10;
    }
}

int main(void) {
    int n,k;
    cin >> n >> k;
    int keta,ketasum,sum;
    sum = 0;
    keta = 1;
    // int ntemp = n;
    cout << keta << endl;
    for(int i = 1; i <= n; i++) {
        for (int j = 0; j < ketasu(i); j++) {
            
        }
    }
}