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
  int n;
  cin >> n;
  map<ll, int> a;
  REP(i, n) {
    ll tmp;
    cin >> tmp;
    a[tmp] = i + 1;
  }
  auto iter = a.begin();
  int aa[n];
  REP(i, n) {
    aa[i] = iter -> second;
    iter = next(iter, 1);
  }
  RREP(i, n) {
    cout << aa[i] << endl;
  }
  return 0;
}