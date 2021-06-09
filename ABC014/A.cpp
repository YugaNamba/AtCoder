#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  cout << (a % b == 0 ? 0 : b -  a % b) << endl;
  return 0;
}