#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n, h, a, b, c, d, e, anser = 0;
  cin >> n >> h >> a >> b >> c >> d >> e;
  int sb = a / b;
  int sd = c / d;
  int best = max(sb, sd);
  rep(i, n) {
    if (h < e + 1) {
      anser += (best * d == c? c : a);
      h += (best * d == c? d : b);
    }
    h -= e;
  }

  cout << anser << endl;
  return 0;
}