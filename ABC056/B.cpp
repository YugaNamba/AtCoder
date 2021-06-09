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
  int w, a, b;
  cin >> w >> a >> b;
  int anser = max(a, b) - min(a + w, b + w);
  if (anser < 0) {
    anser = 0;
  }
  cout << anser << endl;
  return 0;
}