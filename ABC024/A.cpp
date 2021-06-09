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
  int a, b, c, k, s, t, anser;
  cin >> a >> b >> c >> k >> s >> t;
  anser = (s * a) + (t * b);
  if (s + t >= k) anser -= (s + t) * c;
  cout << anser << endl;
  return 0;
}