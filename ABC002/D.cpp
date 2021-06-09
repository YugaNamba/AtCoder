#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n, m; 
  cin >> n >> m;
  vector <int> vec;
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    vec.push_back(x);
    vec.push_back(y);
  }

  if (m == 0) {
    cout << 1 << endl; 
    return 0;
  }

  // cout << anser.size() << endl;
  return 0;
}