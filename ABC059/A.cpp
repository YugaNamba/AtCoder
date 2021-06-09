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
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  string anser = "";
  anser += toupper(s1[0]);
  anser += toupper(s2[0]);
  anser += toupper(s3[0]);
  cout << anser << endl;
  return 0;
}