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
  ivec s(m);
  vector<char> c(m);
  REP(i, m) { cin >> s[i] >> c[i]; }

  REP(i, 1000) {
    string num = to_string(i);
    if (num.size() == n) {
      bool ok = true;
      REP(j, m) {
        if (num[s[j] - 1] != c[j]) ok = false;
      }
      if (ok) {
        print(num);
        return 0;
      }
    }
  }
  print(-1);
  return 0;
}