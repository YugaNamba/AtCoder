#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n;
  cin >> n;
  int anser = 0, count = 0;
  rep(i, n) {
    int tmp;
    cin >> tmp;
    if (tmp != 0) {
      anser += tmp;
      count++;
    }
  }
  if (anser % count != 0) {
    anser /= count;
    anser++;
  } else {
    anser /= count;
  }

  cout << anser << endl;
  return 0;
}