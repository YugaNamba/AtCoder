#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int txa, tya, txb, tyb, t, v, n;
  cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
  
  int d = t * v;
  int x, y;
  bool flag = false;
  rep(i, n) {
    cin >> x >> y;
    double da = sqrt(pow(x - txa, 2.0) + pow(y - tya, 2.0));
    double db = sqrt(pow(x - txb, 2.0) + pow(y - tyb, 2.0));
    if (da + db <= d) flag = true;
  }
  cout << (flag? "YES" : "NO") << endl;
  return 0;
}