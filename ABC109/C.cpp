#include <bits/stdc++.h>
#define FOR(i, m, n) for (ll i = m; i < (n); i++)
#define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << (ele) << "\n"
#define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  ll n, X;
  cin >> n >> X;
  lvec x(n);
  REP(i, n) {
    int tmp;
    cin >> tmp;
    x[i] = abs(tmp - X);
  }

  ll ans = x[0];
  FOR(i, 1, n) ans = gcd(ans, x[i]);
  if (n == 1) ans = x[0];
  print(ans);
  return 0;
}