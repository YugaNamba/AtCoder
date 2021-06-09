#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  cout << (a.size() > b.size() ? a : b) << endl;
  return 0;
}