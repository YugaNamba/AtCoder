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
  int n, m, x;
  cin >> n >> m >> x;
  ivec a(m);
  REP(i, m) cin >> a[i];
  int ansA = 0;
  RFOR(i, x, 0) {
    REP(j, m) {
      if (i == a[j]) ansA++;
    }
    }
  int ansB = 0;
  FOR(i, x, n) {
    REP(j, m) {
      if (i == a[j]) ansB++;
    }
  }
  print(min(ansA, ansB));
  return 0;
}