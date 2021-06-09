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
  int n;
  cin >> n;
  vector<int> r(n);
  double anser = 0;
  REP(i, n) {
    cin >> r[i];
  }
  sort(RALL(r));

  REP(i, n) {
    if (i % 2 == 0) {
      anser += pow(r[i], 2);
    } else {
      anser -= pow(r[i], 2);
    }
  }
  anser *= M_PI;
  cout << fixed << setprecision(6) << anser << endl;
  return 0;
}