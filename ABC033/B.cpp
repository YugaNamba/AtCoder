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
  int n, sum = 0;
  cin >> n;
  map<string, int> m;
  int maxP = 0;
  string maxPKey, anser = "atcoder";
  REP(i, n) {
    string s;
    int p;
    cin >> s >> p;
    if (maxP < p) {
      maxP = p;
      maxPKey = s;
    }
    sum += p;
    m[s] = p;
  }
  if (sum / 2 < m[maxPKey]) {
    anser = maxPKey;
  }
  cout << anser << endl;
  return 0;
}