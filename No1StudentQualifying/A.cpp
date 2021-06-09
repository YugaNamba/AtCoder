#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// int main() {
//   int m, d, anser = 0;
//   cin >> m >> d;
//   FOR(i, 1, m + 1) {
//     FOR(j, 1, d + 1) {
//       int d1 = j % 10, d10 = j / 10 % 10;
//       if (d1 >= 2 && d10 >= 2 && d1 * d10 == i ) {
//         anser++;
//       }
//     }
//   }
//   cout << anser << endl;
//   return 0;
// }

int main() {
  int m, d, anser = 0;
  cin >> m >> d;
  for (int d1 = 2; d1 <=9; d1++) {
    for (int d10 = 2; d10 <=9; d10++) {
      if (10 * d10 + d1 <= d && d1 * d10 <= m) {
        anser++;
      }
    }
  }
  cout << anser << endl;
  return 0;
}