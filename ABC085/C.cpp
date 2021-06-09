// #include <bits/stdc++.h>
// #define rep(i,n) for (int i = 0; i <= (n); ++i)
// using namespace std;

// int main() {
//   int N, Y;
//   cin >> N;
//   cin >> Y;
//   rep(x, N) {
//     rep(y, N - x) {
//       int z = N - x - y;
//       if (10000*x + 5000*y + 1000*z == Y ) {
//         cout << x << ' ' << y << ' '  << z << endl;
//         return 0;
//       }
//     }
//   }
//   cout << -1 << ' ' << -1 << ' '  << -1 << endl;
//   return 0;
// }

#include <bits/stdc++.h>
#define FOR(i, m, n) for (ll i = m; i < (n); i++)
#define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
// #define print(ele) cout << (ele) << "\n"
#define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

void print() { cout << endl; }

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) != 0) cout << " ";
  print(forward<Tail>(tail)...);
}

int main() {
  int N, Y;
  cin >> N >> Y;
  REP(x, N + 1) REP(y, N - x + 1) {
    int z = N - x - y;
    int v = 10000 * x + 5000 * y + 1000 * z;
    if (v == Y) {
      print(x, y, z);
      // cout << x << " " << y << " " << z << endl;
      return 0;
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}
