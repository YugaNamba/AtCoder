#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

void f(int rest, string s) {
  if (rest == 0) {
    cout << s << endl;
  } else {
    for (char c = 'a'; c <= 'c'; c++) {
      f(rest - 1, s + c);
    }
  }
}

int main() {
  int n;
  cin >> n;
  f(n, "");
  return 0;
}