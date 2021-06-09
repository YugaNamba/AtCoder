#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  double x, y, a, b, c, d;
  cin >> x >> y >> a >> b >> c >> d;
  a -= x;
  c -= x;
  b -= y;
  d -= y;
  double anser = abs(a*d - b*c) / 2.0;
  cout << setprecision(10) << anser << endl;
  return 0;
}