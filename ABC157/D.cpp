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

struct UnionFind {
  ivec d;
  UnionFind(int n) : d(n, -1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x, y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y); }
  int size(int x) { return -d[find(x)]; }
};

int deg[100005];
ivec to[100005];

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  UnionFind uf(n);
  REP(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    deg[a]++;
    deg[b]++;
    uf.unite(a, b);
  }

  REP(i, k) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  REP(i, n) {
    int ans = uf.size(i) - 1 - deg[i];
    for (int u : to[i]) {
      if (uf.same(i, u)) ans--;
    }
    print(ans);
  }

  return 0;
}