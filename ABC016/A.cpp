#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int m, d;
  cin >> m >> d;
  cout << (m % d == 0? "YES" : "NO") << endl;
  return 0;
}