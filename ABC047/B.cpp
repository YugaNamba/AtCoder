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
  int w, h, n;
  cin >> w >> h >> n;
  vector<int> xx = {0, w}, yy = {0, h};

  REP(i, n) {
    int x, y, a;
    cin >> x >> y >> a;
    if (a == 1) {
      xx[0] = max(xx[0], x);
    } else if (a == 2) {
      xx[1] = min(xx[1], x);
    } else if (a == 3) {
      yy[0] = max(yy[0], y);
    } else {
      yy[1] = min(yy[1], y);
    }
  }
  int xAbs = max(xx[1] - xx[0], 0);
  int yAbs = max(yy[1] - yy[0], 0);
  int anser = xAbs * yAbs;
  cout << anser << endl;
  return 0;
}