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
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  svec g(H+1);
  REP(i, H)
  {
    cin >> g[i];
  }
  X--;
  Y--;
  int ans = g[X][Y] == '.' ? 1 : 0;
  RREP(i, X)
  {
    if (g[i][Y] == '.') {
      ans++;
    } else {
      break;
    }
  }
  FOR(i, X+1, H) {
    if (g[i][Y] == '.') {
      ans++;
    } else {
      break;
    }
  }
  RREP(i, Y)
  {
    if (g[X][i] == '.') {
      ans++;
    } else {
      break;
    }
  }
  FOR(i, Y+1, W) {
    if (g[X][i] == '.') {
      ans++;
    } else {
      break;
    }
  }
  print(ans);
  return 0;
}