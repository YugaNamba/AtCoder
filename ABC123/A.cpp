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
  ivec a(5);
  int k;
  REP(i, 5) cin >> a[i];
  cin >> k;
  bool ok = true;
  REP(i, 5) {
    REP(j, 5) {
      if (i == j) continue;
      if (max(a[i], a[j]) - min(a[i], a[j]) > k) ok = false;
    }
  }
  print(ok ? "Yay!" : ":(");
  return 0;
}