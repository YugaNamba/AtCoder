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
  cin >> s;

  string p = "WBWBWWBWBWBW";
  p = p + p + p + p + p;
  string anser[] =  {"Do", "", "Re", "", "Mi", "Fa", "", "So", "", "La", "", "Si"};
  REP(i, 12) {
    string cmp = p.substr(i, s.size());
    if (s == cmp) {
      cout << anser[i] << endl;
      return 0;
    }
  }
}