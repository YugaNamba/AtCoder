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
  int n;
  cin >> n;
  string s[n], anser = "";
  REP(i, n) {
    string tmp;
    cin >> tmp;
    sort(ALL(tmp));
    s[i] = tmp;
  }
  anser = s[0];
  FOR(i, 1, n) {
    REP(j, anser.size()) {
      REP(k, s[i].size()) {
        if (anser[j] == s[i][k]) {
          anser += s[i][k];
        }
      }
    }
  }
  cout << anser << endl;
  return 0;
}