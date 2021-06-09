#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  string sa, sb, sc;
  cin >> sa >> sb >> sc;
  char turn = 'a';
  while (1) {
    if (turn == 'a') {
      if (sa.size() == 0) break;
      turn = sa[0];
      sa.erase(sa.begin());
    } else if (turn == 'b') {
      if (sb.size() == 0) break;
      turn = sb[0];
      sb.erase(sb.begin());
    } else if (turn == 'c') {
      if (sc.size() == 0) break;
      turn = sc[0];
      sc.erase(sc.begin());
    }
  }
  char anser = toupper(turn);
  cout << anser << endl;
  return 0;
}