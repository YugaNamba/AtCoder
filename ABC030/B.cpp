#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  double n, m;
  cin >> n >> m;
  if (n == 12) n = 0;
  else if (n > 12) n -= 12;
  n += m/60;
  m *= 360 / 60;

  double anser = min(abs(m - n * 30), 360 - abs(m - n * 30));
  cout << anser << endl;
  return 0;
}