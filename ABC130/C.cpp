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
  ll w, h, x, y;
  cin >> w >> h >> x >> y;

  double anser = (double)w * h / 2;
  int number = (x * 2 == w && y * 2 == h) ? 1 : 0;

  printf("%.10f %d\n", anser, number);
  return 0;
}