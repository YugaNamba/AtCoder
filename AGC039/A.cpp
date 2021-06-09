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
  string s;
  ll k;
  cin >> s >> k;
  ll count = 0;
  if (s.size() == 1) {
    cout << k / 2 << endl;
    return 0;
  }
  REP(i, s.size() - 1) {
    if (s[i] == s[i + 1]) {
      count++;
      s[i + 1] = '?';
    }
  }

  if (s[0] == s[s.size() - 1]) {
    count++;
    cout << count * k - 1 << endl;
    return 0;
  }

  cout << count * k << endl;
  return 0;
}