#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  string x;
  cin >> x;
  bool flag = false;
  rep(i, x.size()) {
    if (x.at(i) == 'c' && x.at(i + 1) == 'h') {
      flag = true;
      i++;
    } else if (x.at(i) == 'o' || x.at(i) == 'k' || x.at(i) == 'u') {
      flag = true;
    } else {
      flag = false;
      break;
    }
  }
  cout << (flag? "YES" : "NO") << endl;
  return 0;
}