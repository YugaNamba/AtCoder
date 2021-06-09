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
const ll INF = 1000000000000000000LL;

void print() { cout << endl; }

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) != 0) cout << " ";
  print(forward<Tail>(tail)...);
}

int main() {
  int n, m;
  cin >> n >> m;
  lvec h(n);
  REP(i, n) cin >> h[i];
  ivec goods(n);
  vector<set<int>> loads(n);
  REP(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    int s = loads[a].size();
    loads[a].insert(b);
    loads[b].insert(a);

    if (loads[a].size() == s) continue;

    if (h[a] > h[b])
      goods[a]++;
    else if (h[a] < h[b])
      goods[b]++;
  }
  int ans = 0;
  REP(i, n) {
    if (goods[i] == loads[i].size()) ans++;
  }
  print(ans);
  return 0;
}