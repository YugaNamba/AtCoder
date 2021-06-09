#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << ele << endl
#define print10(ele) cout << fixed << setprecision(10) << ele << endl

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  ivec a(n);
  REP(i, n) cin >> a[i];
  int ans = 0;
  REP(i, n) {
    int D = 1;
    REP(j, d) {
      D = j * a[i] + 1;
      if (D <= d) ans++;
    }
  }
  ans += x;
  print(ans);
  return 0;
}