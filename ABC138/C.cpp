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
  vector<double> v(n);
  REP(i, n) {
    cin >> v[i];
  }
  sort(ALL(v));
  while (v.size() != 1) {
    double a = (v[0] + v[1]) / 2.0;
    v.erase(v.begin());
    v[0] = a;
  }
  cout << v[0] << endl;
  return 0;
}