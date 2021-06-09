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

int main() {
  int A, B, M;
  cin >> A >> B >> M;
  ivec a(A);
  int am = 1e6;
  REP(i, A) {
    int tmp;
    cin >> tmp;
    am = min(am, tmp);
    a[i] = tmp;
  }
  ivec b(B);
  int bm = 1e6;
  REP(i, B) {
    int tmp;
    cin >> tmp;
    bm = min(bm, tmp);
    b[i] = tmp;
  }
  int ans = 1e8;
  REP(i, M) {
    int x, y, c;
    cin >> x >> y >> c;
    x--;
    y--;
    ans = min(ans, a[x] + b[y] - c);
  }
  ans = min(am + bm, ans);
  print(ans);
  return 0;
}