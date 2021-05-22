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
  int n;
  cin >> n;

  ivec a(n+1), b(n+1), c(n+1);
  REP(i, n) cin >> a[i];
  REP(i, n) cin >> b[i];
  REP(i, n) cin >> c[i];
  ivec aMemo(n + 1);
  REP(i, n) aMemo[a[i]]++;

  int ans = 0;

  REP(i, n) {
    int cj = c[i] -1;
    int bcj = b[cj];
    int aix = aMemo[b[cj]];
    bool ok = bcj > 0;
    if (ok) ans += aix;
  }

  print(ans);
  return 0;
}