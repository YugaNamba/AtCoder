#include <bits/stdc++.h>
#define FOR(i, m, n) for (ll i = m; i < (n); i++)
#define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << (ele) << "\n"
#define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int main() {
  string s, t;
  cin >> s >> t;
  bool ok = true;
  int n = s.size();
  map<char, char> mp;
  map<char, char> mp2;
  REP(i, 26) { mp['a' + i] = '#'; }
  REP(i, 26) { mp2['a' + i] = '#'; }
  REP(i, n) {
    if (mp[t[i]] == '#') {
      if (mp2[s[i]] != t[i] && mp2[s[i]] != '#') {
        ok = false;
        break;
      }
      mp[t[i]] = s[i];
      mp2[s[i]] = t[i];
    } else {
      if (mp[t[i]] != s[i]) {
        ok = false;
        break;
      }
    }
  }
  print(ok ? "Yes" : "No");
  return 0;
}