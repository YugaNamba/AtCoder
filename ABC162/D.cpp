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
  int n;
  string s;
  cin >> n >> s;
  int r = 0, g = 0, b = 0;
  ivec a(n);
  REP(i, n) {
    if (s[i] == 'R') {
      a[i] = 0;
    } else if (s[i] == 'G') {
      a[i] = 1;
    } else if (s[i] == 'B') {
      a[i] = 2;
    }
  }

  lvec cnt(3);
  REP(i, n) cnt[a[i]]++;
  ll ans = 1;
  REP(i, 3) ans *= cnt[i];
  REP(j, n) REP(i, j) {
    int k = 2 * j - i;
    if (k >= n) continue;
    if (a[i] == a[j]) continue;
    if (a[j] == a[k]) continue;
    if (a[i] == a[k]) continue;
    ans--;
  }
  print(ans);
  return 0;
}