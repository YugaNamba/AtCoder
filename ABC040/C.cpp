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
  int n;
  cin >> n;
  ivec a(n);
  REP(i, n) cin >> a[i];
  ll ans = 0;
  ivec dp(n + 10);
  FOR(i, 1, n) {
    dp[i] = dp[0] + abs(a[1] - a[0]);
    if (i != 1) {
      dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]),
                  dp[i - 2] + abs(a[i] - a[i - 2]));
    }
  }
  print(dp[n - 1]);
  return 0;
}