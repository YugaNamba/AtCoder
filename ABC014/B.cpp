#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int a[n];
  rep(i, n) cin >> a[i];

  int anser = 0, count = 0;
  while (x > 0) {
    if (x % 2 == 1) anser += a[count];
    x /= 2;
    count++;
  }
  cout << anser << endl;
  return 0;
}