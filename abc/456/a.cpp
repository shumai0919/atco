#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int dice[3][6];
    double count = 0;
    double all = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> dice[i][j];
        }
    }
    int a[3];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                all++;
                a[0] = dice[0][i];
                a[1] = dice[1][j];
                a[2] = dice[2][k];
                if ((a[0] >= 1 && a[0] <= 3)
                    || (a[1] >= 1 && a[1] <= 3)
                    || (a[2] >= 1 && a[2] <= 3)) {
                    continue;
                }
                if ((a[0] != a[1]) && 
                    (a[1] != a[2]) &&
                    (a[0] != a[2])) {
                    count++;
                }
            }
        }
    }
    double ans = count / all;
    cout << fixed << setprecision(6) << ans << endl;
}