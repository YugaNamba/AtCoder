#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  string n;
  cin >> n;
  rep(i, n.size()) {
    n[i] = tolower(n[i]);
  }
  n[0] = toupper(n[0]);
  cout << n << endl;
  return 0;
}