#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  int a[n];
  rep(i, n) {
    int tmp;
    cin >> tmp;
    if (tmp % 3 == 2) {
      tmp--; 
      count++;
      if (tmp % 2 == 0) {
        count++;
      }
    } else if (tmp % 2 == 0) {
      tmp--;
      count++;
      if (tmp % 3 == 2) {
      tmp--; 
      count++;
        if (tmp % 2 == 0) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}