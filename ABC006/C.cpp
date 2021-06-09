#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  if (m == n*3) cout << 0 << ' ' << n << ' ' << 0 << endl;
  else if (m > n*3) {
    if (m > n*4) cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    else cout << 0 << ' ' << n - (m - n*3) << ' '<< m - n*3 << endl;
  } else {
    if (m < n*2) cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    else cout << n*3 - m << ' ' << n - (n*3 - m) << ' ' << -0 << endl;
  }
  return 0;
}