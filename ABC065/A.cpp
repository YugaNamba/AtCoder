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
  int x, a, b;
  cin >> x >> a >> b;
  if (a - b >= 0) {
    cout << "delicious" << endl;
  } else if (abs(a - b) <= x) {
    cout << "safe" << endl;
  } else {
    cout << "dangerous" << endl;
  }
  return 0;
}