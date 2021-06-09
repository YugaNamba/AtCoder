#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }
  bool flag = true;
  int count = 0;
  while (flag) {
    rep(i, n) {
      if (a[i] % 2 == 0) {
        a[i] /= 2;
      } else {
        flag = false;
        break;
      }
    }
    count++;
  }
  cout << count - 1 << endl;
  return 0;
}