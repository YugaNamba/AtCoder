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
  int n, m;
  cin >> n >> m;
  ivec f(m);
  REP(i, n) {
    int k;
    cin >> k;
    REP(j, k) {
      int a;
      cin >> a;
      a--;
      f[a]++;
    }
  }
  int ans = 0;
  REP(i, m) {
    if (f[i] == n) {
      ans++;
    }
  }
  print(ans);
  return 0;
}