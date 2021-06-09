#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int a, b, anser;
  cin >> a >> b;
  if (a < b ) {
    if (b - a <= 5) {
      anser = b - a;
    } else {
      a += 10;
      anser = a - b;
    }
  } else {
    if (a - b <= 5) {
      anser = a - b;
    } else {
      b += 10;
      anser = b - a;
    }
  }
  cout << anser << endl;
  return 0;
}