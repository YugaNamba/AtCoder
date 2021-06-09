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
  string w;
  cin >> w;
  bool flag = true;
  int count = 1;
  sort(ALL(w));
  if (w.size() == 1) {
    cout << "No" << endl; 
    return 0;
  }
  REP(i, w.size() - 1) {
    if (w[i] == w[i + 1]) count++;
    else {
      if (count % 2 == 1) {
        flag = false;
        break;
      }
      count = 1;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
  return 0;
}