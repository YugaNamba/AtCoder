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

vector<pair<ll, int> > factorrize(ll n) {
  vector<pair<ll, int> > res;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i) continue;
    res.emplace_back(i, 0);
    while (n % i == 0) {
      n /= i;
      res.back().second++;
    }
  }
  if (n != 1) res.emplace_back(n, 1);
  return res;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll g = gcd(a, b);
  auto f = factorrize(g);
  int anser = f.size() + 1;
  cout << anser << endl;
  return 0;
}