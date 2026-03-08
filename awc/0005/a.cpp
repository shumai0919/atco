#include <iostream>
using namespace std;

int main(void) {
  int n, k, sum = 0;
  cin >> n >> k;
  int p[n];
  for (int i = 0; i < n; i++) cin >> p[i];
  
  for (int i = 0; i < n; i++) {
    if (p[i] % k == 0) {
      sum += p[i];
    }
  }
  cout << sum << endl;
}
