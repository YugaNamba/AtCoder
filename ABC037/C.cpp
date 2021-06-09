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
  int n ,k;
  cin >> n >> k;
  vector<ll> a(n);
  REP(i, n) {
    cin >> a[i];
  }
  ll anser = 0;
  for (int i = 0; i < n - k + 1; i++) {
    FOR(j, i, i + k) {
      anser += a[j];
    }
  }
  cout << anser << endl;
  return 0;
}