#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << (ele) << endl
#define print10(ele) cout << fixed << setprecision(10) << (ele) << endl

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int main() {
  string s;
  int q;
  cin >> s >> q;
  bool b = false;
  REP(i, q) {
    int t, f;
    string c;
    cin >> t;
    t--;
    if (t) {
      cin >> f >> c;
      f--;
      if (b) {
        if (f) {
          s += c;
        } else {
          s.insert(0, c);
        }
      } else {
        if (f) {
          s.insert(0, c);
        } else {
          s += c;
        }
      }
    } else {
      b = !b;
    }
  }
  if (!b) reverse(ALL(s));
  print(s);
  return 0;
}