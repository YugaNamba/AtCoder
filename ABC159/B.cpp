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
  string s;
  cin >> s;
  bool ok = true;
  string sr = s;
  reverse(ALL(s));
  int n = s.size();
  string subS = s.substr(0, (n - 1) / 2);
  string subSR = subS;
  reverse(ALL(subSR));
  string s3 = s.substr((n + 3 - 1) / 2, n - 1);
  string s3r = s3;
  reverse(ALL(s3r));
  if (s != sr || subS != subSR || s3 != s3r) {
    ok = false;
  }

  print(ok ? "Yes" : "No");
  return 0;
}