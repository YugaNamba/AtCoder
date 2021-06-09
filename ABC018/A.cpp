#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a > c) {
    a = 1;
    if (b > c) {
      b = 2;
      c = 3;
    }
    else {
      c = 2;
      b = 3;
    } 
  } else  if (b > a && b > c) {
    b = 1;
    if (a > c) {
      a = 2;
      c = 3;
    }
    else {
      c = 2;
      a = 3;
    } 
  } else if (c > a && c > b) {
    c = 1;
    if (a > b) {
      a = 2;
      b = 3;
    }
    else {
      b = 2;
      a = 3;
    } 
  }
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  return 0;
}