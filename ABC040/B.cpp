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
  int ans = 1e8;
  FOR(x, 1, sqrt(n) + 1) {
    int y = n / x;
    int s = abs(x - y) + n - x * y;
    ans = min(ans, s);
  }
  print(ans);
  return 0;
}