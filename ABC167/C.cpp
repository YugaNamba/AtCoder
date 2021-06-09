#include <bits/stdc++.h>
#define FOR(i, m, n) for (ll i = m; i < (n); i++)
#define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
//#define print(ele) cout << (ele) << "\n"
#define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const int INF = 1001001001;

void print() { cout << endl; }

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) != 0) cout << " ";
  print(forward<Tail>(tail)...);
}

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  ivec c(n);

  vector<ivec> a(n, ivec(m));
  REP(i, n) {
    cin >> c[i];
    REP(j, m) { cin >> a[i][j]; }
  }
  int ans = INF;
  REP(s, 1 << n) {
    int cost = 0;
    ivec d(m);
    REP(i, n) {
      if (s >> i & 1) {
        cost += c[i];
        REP(j, m) d[j] += a[i][j];
      }
    }
    bool ok = true;
    REP(j, m) if (d[j] < x) ok = false;
    if (ok) ans = min(ans, cost);
  }
  if (ans == INF)
    print(-1);
  else
    print(ans);
  return 0;
}