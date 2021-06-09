// #include <bits/stdc++.h>
// #define FOR(i, m, n) for (int i = m; i < (n); i++)
// #define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
// #define REP(i, n) FOR(i, 0, n)
// #define RREP(i, n) RFOR(i, n, 0)
// #define ALL(v) v.begin(), v.end()
// #define RALL(v) v.rbegin(), v.rend()
// #define print(ele) cout << ele << endl
// #define print10(ele) cout << fixed << setprecision(10) << ele << endl

// using namespace std;
// typedef long long ll;
// typedef vector<int> ivec;
// typedef vector<string> svec;
// typedef vector<ll> lvec;

// const int mod = 1e9 + 7;
// const ll INF = 1000000000000000000LL;

// int main() {
//   int n;
//   cin >> n;
//   ivec t(n + 1), x(n + 1), y(n + 1);
//   REP(i, n) cin >> t[i] >> x[i] >> y[i];
//   bool ok = true;

//   REP(i, n) {
//     ll cur = x[i] + y[i];
//     if (t[i] < cur) ok = false;
//     if (t[i] % 2) {
//       if (!(cur % 2)) ok = false;
//     } else {
//       if (cur % 2) ok = false;
//     }
//   }

//   print((ok ? "Yes" : "No"));
//   return 0;
// }

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
  ivec t(n), x(n), y(n);
  REP(i, n) cin >> t[i] >> x[i] >> y[i];
  bool ok = true;
  REP(i, n) {
    if (t[i] % 2) {
      ll s = x[i] + y[i];
      if (s % 2 == 0 || s > t[i]) {
        ok = false;
        break;
      }
    } else {
      ll s = x[i] + y[i];
      if (s % 2 || s > t[i]) {
        ok = false;
        break;
      }
    }
  }

  print(ok ? "Yes" : "No");
  return 0;
}