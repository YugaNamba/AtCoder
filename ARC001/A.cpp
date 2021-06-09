#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << ele << endl
#define print10(ele) cout << fixed << setprecision(10) << ele << endl

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int main() {
  vector<vector<char>> c(8, vector<char>(8));
  REP(i, 8) REP(j, 8) cin >> c[i][j];
  int count = 3;
  REP(i, 8) REP(j, 8) {
    if (c[i][j] == 'Q') continue;
    bool ok = true;
    REP(y, 8) {
      if (c[i][y] == 'Q') ok = false;
    }
    REP(t, 8) {
      if (c[t][j] == 'Q') ok = false;
    }
    int t1 = i, y1 = j;
    while (1) {
      if (t1 == 0 || y1 == 0) break;
      t1--;
      y1--;
    }
    while (1) {
      if (t1 == 7 || y1 == 7) break;
      if (c[t1][y1] == 'Q') ok = false;
      t1++;
      y1++;
    }
    int t2 = i, y2 = j;
    while (1) {
      if (t2 == 0 || y2 == 7) break;
      t2--;
      y2++;
    }
    while (1) {
      if (t2 == 7 || y2 == 0) break;
      if (c[t2][y2] == 'Q') ok = false;
      t2++;
      y2--;
    }

    if (ok) {
      c[i][j] = 'Q';
      count++;
    }
  }
  if (count != 8) {
    print("No Answer");
    // return 0;
  }
  REP(i, 8) {
    REP(j, 8) { cout << c[i][j]; }
    cout << endl;
  }
  return 0;
}