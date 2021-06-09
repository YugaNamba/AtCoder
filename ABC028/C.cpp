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
  vector<int> a(5);
  REP(i, 5) {
    cin >> a[i];
  } 
  int anser = max(a[4] + a[3] + a[0], a[4] + a[2] + a[1]);
  cout << anser << endl;
  return 0;
}
