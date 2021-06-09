#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  int p[n];
  rep(i, n) {
    cin >> p[i];
  }
 
  rep(i, n) {
    if (p[i] != i + 1) {
      count++;
    }
    
  }
  if (count == 0 || count == 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}