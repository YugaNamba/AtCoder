#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  sort(rAll(a));

  rep(i, n) {
    if (a[i] != a[i + 1]) {
      cout << a[i + 1] << endl;
      return 0;
    }
  }
}