#include <iostream>
using namespace std;

int main(void) {
  int n, m, k;
  cin >> n >> m >> k;
  int s[n], p[m], v[m];
  for (int i = 0; i < n; i++) cin >> s[i];
  for (int i = 0; i < m; i++) cin >> p[i] >> v[i];
  for (int i = 0; i < m; i++) s[p[i] - 1] = v[i];
  
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] < k) ans++;
  }
  cout << ans <<endl;
  return 0;
}
