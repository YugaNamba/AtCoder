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

const int dx[2] = {1, 0};
const int dy[2] = {0, 1};

int main() {
  int h, w;
  cin >> h >> w;
  svec field(h);
  REP(i, h) cin >> field[i];
  int ans = 0;

  /* スタート地点とゴール地点 */
  int sx = 0, sy = 0, gx = h - 1, gy = w - 1;

  ////////////////////////////////////////
  /* 幅優先探索の初期設定 */
  ////////////////////////////////////////

  // 各セルの最短距離 (訪れていないところは -1 としておく)
  vector<vector<int> > dist(h, vector<int>(w, -1));
  dist[sx][sy] = 0;  // スタートを 0 に

  // 探索中に各マスはどのマスから来たのかを表す配列
  // (最短経路長を知るだけなら、これは不要)
  vector<vector<int> > prev_x(h, vector<int>(w, -1));
  vector<vector<int> > prev_y(h, vector<int>(w, -1));

  // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
  queue<pair<int, int> > que;
  que.push(make_pair(sx, sy));  // スタートを push

  ////////////////////////////////////////
  /* 幅優先探索を実施 */
  ////////////////////////////////////////

  /* キューが空になるまで */
  while (!que.empty()) {
    pair<int, int> current_pos = que.front();
    int x = current_pos.first;
    int y = current_pos.second;
    que.pop();  // キューから pop を忘れずに

    // 隣接頂点を探索
    for (int direction = 0; direction < 2; ++direction) {
      int next_x = x + dx[direction];
      int next_y = y + dy[direction];
      if (next_x < 0 || next_x >= h || next_y < 0 || next_y >= w)
        continue;  // 場外アウトならダメ
      // if (field[next_x][next_y] == '#') continue;  // 壁はダメ
      if (field[next_x][next_y] == '#') {
        ans++;
        field[next_x][next_y] = '.';
      }

      // まだ見ていない頂点なら push
      if (dist[next_x][next_y] == -1) {
        que.push(make_pair(next_x, next_y));
        dist[next_x][next_y] = dist[x][y] + 1;  // (next_x, next_y) の距離も更新
        prev_x[next_x][next_y] =
            x;  // どの頂点から情報が伝播して来たか、縦方向の座標をメモ
        prev_y[next_x][next_y] =
            y;  // どの頂点から情報が伝播して来たか、横方向の座標をメモ
      }
    }
  }
  int x = gx, y = gy;
  while (x != -1 && y != -1) {
    field[x][y] = 'o';  // 通過したことを示す

    // 前の頂点へ行く
    int px = prev_x[x][y];
    int py = prev_y[x][y];
    x = px, y = py;
  }
  for (int i = 0; i < h; ++h) {
    for (int j = 0; j < w; ++w) {
      cout << field[i][j];
    }
    cout << endl;
  }
  return 0;
}