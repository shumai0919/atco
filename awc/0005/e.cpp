#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(void) {
  int n, q;
  cin >> n >> q;
  vector<int> a(n), l(q), r(q);
  rep(i, n) cin >> a[i];
  rep(i, q) cin >> l[i] >> r[i];
  
  rep(i, q) { l[i]--; r[i]--; }
  rep(i, q) {
    int max = a[l[i]];
    for (int j = l[i]; j < r[i]; j++) {
      if (max < a[j + 1]) max = a[j + 1];
    }
    cout << max << endl;
  }
}
