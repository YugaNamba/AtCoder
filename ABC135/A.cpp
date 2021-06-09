#include <bits/stdc++.h>
#define rep(i,n) for (int i = 1; i < (n); i++)
using namespace std;

int main() {
  int a, b , k;
  cin >> a >> b;
  rep(i, 1000000000) {
    if (abs(a - i) == abs(b - i)) {
    cout << i << endl;
    return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}