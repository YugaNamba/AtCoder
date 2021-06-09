#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;
  int anser = 101;
  rep(i, n) {
    int t;
    cin >> t;
    anser = min(anser, t);
  }
  cout << anser << endl;
  return 0;
}