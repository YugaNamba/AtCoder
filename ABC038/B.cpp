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
  int h1, w1, h2, w2;
  cin >> h1 >> w1 >> h2 >> w2;
  cout << (h1 == h2 || h1 == w2 || w1 == h2 || w1 == w2 ? "YES" : "NO") << endl;
  return 0;
}