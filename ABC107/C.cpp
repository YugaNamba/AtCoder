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

int main() {
  int n, k;
  cin >> n >> k;
  lvec x(n);
  REP(i, n) cin >> x[i];

  x.push_back(0);
  sort(ALL(x));
  x.erase(unique(ALL(x)), x.end());

  ll ans = INF;

  REP(i, n - k + 1) {
    ll mn = min(abs(x[i]), abs(x[i + k]));
    ll mx = max(abs(x[i]), abs(x[i + k]));
    ll dist;
    if (x[i] * x[i + k] < 0) {
      dist = mn * 2 + mx;
    } else {
      dist = mn + mx;
    }
    ans = min(ans, dist);
  }

  if (k == 1) {
    ans = abs(x[0]);
  }
  print(ans);

  return 0;
}