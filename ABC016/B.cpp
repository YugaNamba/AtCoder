#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int a, b ,c;
  cin >> a >> b >> c;
  string anser;
  if (a + b == c && a - b == c) {
    anser = "?";
  } else if (a + b == c) {
    anser = "+";
  } else if (a - b == c) {
    anser = "-";
  } else {
    anser = "!";
  }
  cout << anser << endl;
  return 0;
}