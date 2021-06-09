#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << (ele) << endl
#define print10(ele) cout << fixed << setprecision(10) << (ele) << endl

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int main() {
  int n, m;
  cin >> n >> m;
  lvec x(m);
  REP(i, m) cin >> x[i];
  sort(ALL(x));
  lvec dist(m - 1);
  REP(i, m - 1) {
    ll distance = x[i + 1] - x[i];
    dist[i] = distance;
  }
  sort(RALL(dist));

  ll ans = 0;
  FOR(i, n - 1, m - 1) ans += dist[i];

  print(n >= m ? 0 : ans);
  return 0;
}