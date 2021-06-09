// #include <bits/stdc++.h>
// #define FOR(i, m, n) for (int i = m; i < (n); i++)
// #define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
// #define REP(i, n) FOR(i, 0, n)
// #define RREP(i, n) RFOR(i, n, 0)
// #define ALL(v) v.begin(), v.end()
// #define RALL(v) v.rbegin(), v.rend()
// using namespace std;
// typedef long long ll;
// const int mod = 1e9 + 7;

// ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

// int main() {
//   int n, d;
//   cin >> n >> d;
//   int x[n][d];
//   REP(i, n) {
//     REP(j, d) { cin >> x[i][j]; }
//   }
//   int anser = 0;
//   REP(i, n) {
//     REP(j, d) {
//       FOR(k, i, n) {
//         int sum = 0;
//         FOR(l, j, d) { sum += pow(x[i][j] - x[k][l], 2); }
//         if (is_int_lround(sqrt(sum))) {
//           anser++;
//         }
//       }
//     }
//   }
//   cout << n << endl;
//   return 0;
// }

#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));
  REP(i, n) {
    REP(j, d) { cin >> x[i][j]; }
  }
  int anser = 0;
  REP(i, n) {
    REP(j, i) {
      int sq = 0;
      REP(k, d) {
        int s = x[i][k] - x[j][k];
        sq += s * s;
      }
      int s = sqrt(sq) + 0.5;
      if (s * s == sq) anser++;
    }
  }
  cout << anser << endl;
  return 0;
}