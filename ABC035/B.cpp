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
  string s;
  int t;
  cin >> s >> t;
  int x = 0, y = 0, count = 0;
  REP(i, s.size()) {
    if (s[i] == 'U') y++;
    else if (s[i] == 'R') x++;
    else if (s[i] == 'D') y--;
    else if (s[i] == 'L') x--;
    else count++;
  }
  int d = abs(x) + abs(y), anser;
  if (t == 1) anser = d + count;
  else {
    int size = s.size();
    anser = max(size % 2, d - count);
  }
  cout << anser << endl;
  return 0;
}