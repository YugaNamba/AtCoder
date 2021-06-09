// #include <bits/stdc++.h>
// #define FOR(i, m, n) for (ll i = m; i < (n); i++)
// #define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
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
// lvec a = {10, 11, 12};
// lvec f(ll x) {
//   REP(i, x) {
//     string a0 = to_string(a[0]);
//     string a1 = to_string(a[1]);
//     if (a0.size() != a1.size()) {
//       REP(i, 3) a[i] += 11;
//       x--;
//     } else {
//       a[0] += 11;
//       a[1] += 11;
//       a[2] += 11;
//     }
//   }
//   return a;
// }

// int main() {
//   int k;
//   cin >> k;
//   ll ans;
//   if (k <= 9) {
//     ans = k;
//   } else {
//     k -= 10;
//     ll num = k / 3;
//     lvec a = f(num);
//     int b = k % 3;
//     print(a[b]);
//   }
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
  int k;
  cin >> k;
  lvec a;
  FOR(i, 1, 10) a.push_back(i);

  while (1) {
    if (k <= a.size()) {
      print(a[k - 1]);
      return 0;
    }
    k -= a.size();
    lvec old;
    swap(a, old);
    for (ll x : old) {
      for (int i = -1; i <= 1; i++) {
        int d = x % 10 + i;
        if (d < 0 || d > 9) continue;
        ll nx = x * 10 + d;
        a.push_back(nx);
      }
    }
  }
  return 0;
}