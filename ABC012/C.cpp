#include <bits/stdc++.h>
#define rep(i,n) for (int i = 1; i <= (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n;
  cin >> n;
  int dif = 2025 - n;
  vector<int> a;
  rep(i, 9) {
    rep(j,9) {
      if (i * j == dif) {
        a.push_back(i);
        a.push_back(j);
      }
    }
  }
  for (int i = 0; i < a.size(); i += 2) {
    cout << a[i] << " " << "x" << " " << a[i + 1] << endl;
  }
  return 0;
}