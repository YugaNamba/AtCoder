// #include <bits/stdc++.h>
// #define rep(i,n) for (int i = 0; i < (n); i++)
// // #define cRep(i,m,n) for (int i = m; i < (n); i++)
// using namespace std;

// int main() {
//   int r, c, sy, sx, gy, gx;
//   cin >> r >> c >> sy >> sx >> gy >> gx;
//   sy --; sx--; gy--; gx--;
//   int map[r][c], anser;
//   string a;
//   rep(i, r) {
//     rep(j, c) {
//       cin >> a;
//       if (a == "#") map[i][j] = -1;
//       else map[i][j] = 0;
//     }
//   }

//   bool isArrived = false;
//   int ny = sy, nx = sx, count;
//   while (isArrived == false) {
//     count++;
//     //↑
//     if (map[ny-count][nx] != -1 && map[ny-count][nx] == 0) {
//       map[ny-count][nx] = count;
//     }
//     //→
//     if (map[ny][nx+count] != -1 && map[ny+count][nx] == 0) {
//       map[ny][nx+count] = count;
//     }
//     //↓
//     if (map[ny+count][nx] != -1 && map[ny+count][nx] == 0) {
//       map[ny+count][nx] = count;
//     }
//     //←
//     if (map[ny][nx-count] != -1 && map[ny][nx-count] == 0) {
//       map[ny][nx-count] = count;
//     }
//   }

//   cout << anser << endl;
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

ll factorial(ll n) {
  ll answer = 1;
  while (n > 1) {
    answer *= n;
    answer %= mod;
    n--;
  }
  return answer;
}

ll combination(ll n, ll r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}

ll permutation(ll n, ll r) { return factorial(n) / factorial(n - r); }

int main() {
  int n;
  cin >> n;
  cout << n << endl;
  return 0;
}