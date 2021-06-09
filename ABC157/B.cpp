// #include <bits/stdc++.h>
// #define FOR(i, m, n) for (int i = m; i < (n); i++)
// #define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
// #define REP(i, n) FOR(i, 0, n)
// #define RREP(i, n) RFOR(i, n, 0)
// #define ALL(v) v.begin(), v.end()
// #define RALL(v) v.rbegin(), v.rend()
// #define print(ele) cout << (ele) << endl
// #define print10(ele) cout << fixed << setprecision(10) << (ele) << endl

// using namespace std;
// typedef long long ll;
// typedef vector<int> ivec;
// typedef vector<string> svec;
// typedef vector<ll> lvec;

// const int mod = 1e9 + 7;
// const ll INF = 1000000000000000000LL;

// int main() {
//   ivec a(9);
//   REP(i, 9) cin >> a[i];
//   int n;
//   cin >> n;
//   ivec b(n);
//   REP(i, n) cin >> b[i];
//   bool ok = false;

//   vector<bool> ans(9, false);
//   REP(i, n) {
//     REP(j, 9) {
//       if (a[j] == b[i]) {
//         ans[j] = true;
//       }
//     }
//   }

//   if (ans[0] && ans[1] && ans[2])
//     ok = true;
//   else if (ans[3] && ans[4] && ans[5])
//     ok = true;
//   else if (ans[6] && ans[7] && ans[8])
//     ok = true;
//   else if (ans[0] && ans[4] && ans[8])
//     ok = true;
//   else if (ans[2] && ans[4] && ans[6])
//     ok = true;
//   else if (ans[0] && ans[3] && ans[6])
//     ok = true;
//   else if (ans[1] && ans[4] && ans[7])
//     ok = true;
//   else if (ans[2] && ans[5] && ans[8])
//     ok = true;

//   print(ok ? "Yes" : "No");
//   return 0;
// }

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
  vector<ivec> a(3, ivec(3));
  REP(i, 3) REP(j, 3) cin >> a[i][j];
  int n;
  cin >> n;
  REP(i, n) {
    int b;
    cin >> b;
    REP(j, 3) REP(k, 3) {
      if (a[j][k] == b) a[j][k] = 0;
    }
  };

  bool ok = false;

  REP(i, 3) {
    int count = 0;
    REP(j, 3) { count += a[i][j]; }
    if (count == 0) {
      ok = true;
    }
  }

  REP(i, 3) {
    int count = 0;
    REP(j, 3) { count += a[j][i]; }
    if (count == 0) {
      ok = true;
    }
  }

  {
    int count = 0;
    REP(i, 3) {
      count += a[i][i];
      if (count == 0) {
        ok = true;
      }
    }
  }

  {
    int count = 0;
    REP(i, 3) {
      count += a[i][2 - i];
      if (count == 0) {
        ok = true;
      }
    }
  }

  print(ok ? "Yes" : "No");
  return 0;
}