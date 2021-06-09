#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define MOD = 1000000007
using namespace std;
typedef long long ll;

int main() {
  int n, s, t, w, count = 0;
  cin >> n >> s >> t >> w;
  if (s <= w && w <= t) {
      count++;
    }
  REP(i, n - 1) {
    int a;
    cin >> a;
    w += a;
    if (s <= w && w <= t) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}