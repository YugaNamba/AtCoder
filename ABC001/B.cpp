#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  double m; 
  cin >> m;
  m *= 0.001;
  if (m < 0.1) {
    cout << "00" << endl;
  } else if (m < 1) {
    cout << 0 << m*10 << endl;
  } else if (m <= 5) {
    cout << m*10 << endl;
  } else if (m <= 30) {
    cout << m + 50 << endl;
  } else if (m <= 70) {
    cout << ((m - 30) / 5) + 80 << endl;
  } else {
    cout << 89 << endl;
  }
  return 0;
}