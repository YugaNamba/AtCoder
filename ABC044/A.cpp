#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  int n, k, x, y, anser;
  cin >> n >> k >> x >> y;
  if (n <= k) {
    anser = n * x;
  } else {
    anser = k * x + (n - k) * y;
  }
  cout << anser << endl;
  return 0;
}