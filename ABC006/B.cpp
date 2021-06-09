#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[1000010];
  a[1] = 0;
  a[2] = 0;
  a[3] = 1;
  for(int i = 4; i <= n; i++) {
    a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    a[i] %= 10007;
  }
  cout << a[n] << endl;
  return 0;
}