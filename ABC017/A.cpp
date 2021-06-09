#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int anser = 0;
  rep(i, 3) {
    int tmp1, tmp2, tmp3;
    cin >> tmp1 >> tmp2;
    tmp3 = tmp1 * tmp2 / 10;
    anser += tmp3;
  }
  cout << anser << endl;
  return 0;
}