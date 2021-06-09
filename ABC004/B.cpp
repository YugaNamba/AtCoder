#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  char cc[4][4];
  rep(i, 4) {
    rep(j, 4) {
      cin >> cc[i][j];
    }
  }
  rep(i, 4) {
    rep(j, 4) {
      cout << cc[3 - i][3 - j];
      if (j != 3) cout << ' ';
    }
    cout << endl;
  }
  return 0;
}