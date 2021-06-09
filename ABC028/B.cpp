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
  int aCount = 0, bCount = 0, cCount = 0, dCount = 0, eCount = 0, fCount = 0;
  REP(i, s.size()) {
    if (s[i] == 'A') aCount++;
    else if (s[i] == 'B') bCount++;
    else if (s[i] == 'C') cCount++;
    else if (s[i] == 'D') dCount++;
    else if (s[i] == 'E') eCount++;
    else fCount++;
  }
  cout << aCount << " " << bCount << " " << cCount << " " << dCount << " " << eCount << " " << fCount << endl;
  return 0;
}