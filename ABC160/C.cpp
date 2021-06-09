// #include <bits/stdc++.h>
// #define FOR(i, m, n) for (ll i = m; i < (n); i++)
// #define RFOR(i, m, n) for (ll i = (m - 1); i >= n; i--)
// #define REP(i, n) FOR(i, 0, n)
// #define RREP(i, n) RFOR(i, n, 0)
// #define ALL(v) v.begin(), v.end()
// #define RALL(v) v.rbegin(), v.rend()
// #define print(ele) cout << (ele) << "\n"
// #define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

// using namespace std;
// typedef long long ll;
// typedef vector<int> ivec;
// typedef vector<string> svec;
// typedef vector<ll> lvec;

// const int mod = 1e9 + 7;
// const ll INF = 1000000000000000000LL;

// int main() {
//   int k, n;
//   cin >> k >> n;
//   ivec a(n);
//   REP(i, n) cin >> a[i];

//   ll sum = 0;
//   int ma = 0;
//   REP(i, n) {
//     int dist;
//     if (i == n - 1) {
//       dist = k - a[i] + a[0];
//     } else {
//       dist = a[i + 1] - a[i];
//     }
//     sum += dist;
//     ma = max(ma, dist);
//   }
//   ll ans = sum - ma;
//   print(ans);
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
  int k, n;
  cin >> k >> n;
  ivec a(n);
  REP(i, n) cin >> a[i];

  a.push_back(a[0] + k);
  int l = 0;
  REP(i, n) { l = max(l, a[i + 1] - a[i]); }
  ll ans = k - l;
  print(ans);
  return 0;
}