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
  int ans = 0;
  FOR(i, 1, n) {
    string x = s.substr(0, i);
    string y = s.substr(i);
    set<char> sx, sy;
    REP(j, x.size()) sx.insert(x[j]);
    REP(j, y.size()) sy.insert(y[j]);
    int count = 0;
    for (char cx : sx) {
      if (sy.count(cx)) {
        count++;
      }
    }
    ans = max(ans, count);
  }
  print(ans);
  return 0;
}