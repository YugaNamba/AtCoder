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
const int INF = 1e9;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;
  ivec ans(n);
  REP(sv, n) {
    ivec dist(n, INF);
    queue<int> q;
    auto push = [&](int v, int d) {
      if (dist[v] != INF) return;
      dist[v] = d;
      q.push(v);
    };
    push(sv, 0);
    while (!q.empty()) {
      int v = q.front();
      q.pop();
      int d = dist[v];
      if (v - 1 >= 0) push(v - 1, d + 1);
      if (v + 1 < n) push(v + 1, d + 1);
      if (v == x) push(y, d + 1);
      if (v == y) push(x, d + 1);
    }
    REP(i, n) ans[dist[i]]++;
  }
  REP(i, n) ans[i] /= 2;
  FOR(i, 1, n) print(ans[i]);
  return 0;
}