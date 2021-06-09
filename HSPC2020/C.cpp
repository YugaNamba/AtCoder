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

using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
ivec dis;
void dfs(const Graph& G, int v, int& dist) {
  dis[v] = dist++;
  seen[v] = true;  // v を訪問済にする

  // v から行ける各頂点 next_v について
  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;  // next_v が探索済だったらスルー
    dfs(G, next_v);              // 再帰的に探索
  }
}

int main() {
  int n;
  cin >> n;

  Graph G(n);
  REP(i, n - 1) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  seen.assign(n, false);  // 全頂点を「未訪問」に初期化
  dfs(G, 0);

  return 0;
}