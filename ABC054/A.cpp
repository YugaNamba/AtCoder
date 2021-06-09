#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a == 1) a = 14;
  if (b == 1) b = 14;
  if (a > b) cout << "Alice" << endl;
  else if (a == b) cout << "Draw" << endl;
  else cout << "Bob" << endl;
  return 0;
}