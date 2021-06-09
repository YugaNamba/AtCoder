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
  char s[n][n];
  REP(i, n) {
    REP(j, n) {
      cin >> s[j][n - 1 - i];
    }
  }
  REP(i, n) {
    REP(j,n) {
      cout << s[i][j];
    }
    cout << endl;
  }
  return 0;
}