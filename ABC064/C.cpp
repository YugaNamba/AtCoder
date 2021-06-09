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
  int n;
  cin >> n;
  int colors[9] = {0};
  REP(i, n) {
    int a;
    cin >> a;
    if (a / 400 >= 8) {
      colors[8] += 1;
    } else {
      if (colors[a / 400] == 0) {
        colors[a / 400] = 1;
      }
    }
  }
  int count = 0;
  REP(i, 8) { count += colors[i]; }

  cout << max(count, 1) << " " << count + colors[8] << endl;
  return 0;
}