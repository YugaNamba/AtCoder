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

bool comp(string s1, string s2) {
  string s1l;
  s1l.resize(s1.size());
  transform(s1.begin(), s1.end(), s1l.begin(), ::toupper);
  string s2l;
  s2l.resize(s2.size());
  transform(s2.begin(), s2.end(), s2l.begin(), ::toupper);
  return s1l < s2l;
}

int main() {
  string s;
  cin >> s;
  string ans;
  svec a;
  int bg = 0;
  bool st = false;
  int cnt = 0;
  REP(i, s.size()) {
    cnt++;
    if (s[i] >= 'A' && s[i] <= 'Z' && !st) {
      bg = i;
      st = true;
    } else if (s[i] >= 'A' && s[i] <= 'Z' && st) {
      string subs = s.substr(bg, cnt);
      cnt = 0;
      a.push_back(subs);
      st = false;
    }
  }

  sort(ALL(a), comp);

  REP(i, a.size()) ans += a[i];

  print(ans);
  return 0;
}