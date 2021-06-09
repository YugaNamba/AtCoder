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
  double b = 0;
  REP(i, n) {
    double tmp;
    cin >> tmp;
    b += 1/tmp;
  }

  double anser = 1 / b;

  cout << fixed << setprecision(5) << anser << endl;
  return 0;
}