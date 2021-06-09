#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  int r, c, k;
  cin >> r >> c >> k;
  char a[r][c];
  REP(i, r) {
    REP(j, c) {
      cin >> a[i][j];
    }
  }

  int count = 0;
  FOR(i, 1, r) {
    FOR(j, 1, c) {
      if (a[i][j] == 'o') {
        if (a[i - 1][j] == 'o' && a[i][j + 1] == 'o' && a[i + 1][j] == 'o' && a[i][j - 1] == 'o') {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}