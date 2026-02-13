#include <iostream>
using namespace std;

int main(void) {
  int n, s, t;
  cin >> n >> s >> t;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  int tasktime = 0;
  for (int i = 0; i < n; i++) tasktime += a[i];
  int timelimit = (t - s) * 60;
  if (tasktime <= timelimit) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
