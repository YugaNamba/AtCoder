#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string w;
  cin >> w;
  string anser;
  rep(i, w.size()) {
    if (w[i] != 'a' && w[i] != 'i' && w[i] != 'u' && w[i] != 'e' && w[i] != 'o') {
      anser += w[i];
    }
  }
  cout << anser << endl;
  return 0;
}