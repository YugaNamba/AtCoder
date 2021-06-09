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
  int n;
  cin >> n;
  set<string> st;
  string pre = "";
  bool ok = true;
  REP(i, n) {
    string s;
    cin >> s;
    int preSize = st.size();
    st.insert(s);
    int nowSize = st.size();

    if (i == 0) {
      pre = s;
      continue;
    }

    if (s[0] != pre[pre.size() - 1]) ok = false;
    pre = s;
    if (preSize == nowSize) ok = false;
  }
  print(ok ? "Yes" : "No");
  return 0;
}