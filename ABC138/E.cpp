#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  string s, t;
  cin >> s >> t;
  int anser;
  bool flag = true;
  REP(i, t.size()) {
    REP(j, s.size()) {
      if (t[i] == s[j]) flag = false;
    }
  }
  cout << (flag ? anser : -1) << endl;
  return 0;
}