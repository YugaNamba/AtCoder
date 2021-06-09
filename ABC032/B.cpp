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
  int k;
  cin >> s >> k;
  set<string> a;
  if (s.size() < k) {
    cout << 0 << endl;
    return 0;
  }
  REP(i, s.size() - k + 1) {
    string tmp = "";
    REP(j, k) {
      tmp += s[i + j];
    }
    a.insert(tmp);
  } 
  cout << a.size() << endl;
  return 0;
}