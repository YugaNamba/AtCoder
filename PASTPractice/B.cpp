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
  cin >> n;
  lvec a(n);
  REP(i, n) cin >> a[i];
  REP(i, n - 1) {
    ll x = a[i + 1] - a[i];
    if (x < 0) {
      cout << "down " << abs(x) << endl;
    } else if (x == 0) {
      cout << "stay" << endl;
    } else {
      cout << "up " << abs(x) << endl;
    }
  }
  return 0;
}