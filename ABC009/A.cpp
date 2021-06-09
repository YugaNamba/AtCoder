#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n % 2 == 0) n /= 2;
  else {
    n /= 2;
    n++;
  }
  cout << n << endl;
  return 0;
}