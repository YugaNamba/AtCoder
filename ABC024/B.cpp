#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  int n, t,anser = 0;
  cin >> n >> t;
  int a[n];
  REP(i, n) {
    cin >> a[i];
  }

  FOR(i, 1, n) {
    if (a[i] - a[i - 1] < t) {
      anser += a[i] - a[i - 1];
    } else {
      anser += t;
    }
  }
anser += t;
  cout << anser << endl;
  return 0;
}