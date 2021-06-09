#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define MOD = 1000000007
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;
  bool flag = false;
  int i;
  string res = "b";
  if (n != 1) {
    for (i = 1; i < n; i++) {
      if (i % 3 == 1) {
        res = "a" + res + "c";
      } else if (i % 3 == 2) {
        res = "c" + res + "a";
      } else {
        res = "b" + res + "b";
      }
      if (res == s) {
        flag = true;
        break;
      }
    }
  } else {
    if (s == "b") {
      flag = true;
    }
  }
  
  cout << (flag? i : -1) << endl;
  return 0;
}