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
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  REP(i,q) {
    int l, r, t;
    cin >> l >> r >> t;
    FOR(j, l - 1, r) {
      a[j] = t;
    }
  }
  REP(i,n) {
    cout << a[i] << endl;
  }
  return 0;
}