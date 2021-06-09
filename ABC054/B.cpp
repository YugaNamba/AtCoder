#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
  int n, m, trueCount;
  cin >> n >> m;
  char a[50][50], b[50][50];

  rep(i, n) rep(j, n) cin >> a[i][j];
  rep(i, m) rep(j, m) cin >> b[i][j];

  rep(i, n) {
    rep(j, n) {
      rep(mi, m) {
        rep(mj, m) {
          if (a[i + mi][j + mj] == b[mi][mj]) trueCount++;
        }
      }
      if (trueCount == m*m) {
        cout << "Yes" << endl;
        return 0;
      } else trueCount = 0;
    }
  }

  cout << "No" << endl;
  return 0;
}