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

ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  int t, n;
  cin >> t >> n;
  vector<int> a(n);
  REP(i, n) { cin >> a[i]; }
  int m;
  cin >> m;
  vector<int> b(m);
  REP(i, m) { cin >> b[i]; }
  bool isAllSold;
  int i = 0;
  while (1) {
    if (b.size() == 0) {
      isAllSold = true;
      break;
    } else if (i > a.size() - 1) {
      isAllSold = false;
      break;
    }
    if (b[0] - a[i] > t) {
      i++;
      continue;
    } else if (b[0] - a[i] < 0) {
      isAllSold = false;
      break;
    } else {
      i++;
      b.erase(b.begin());
    }
  }
  cout << (isAllSold ? "yes" : "no") << endl;
  return 0;
}