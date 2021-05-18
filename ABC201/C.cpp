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
  string s;
  cin >> s;
  int ans = 0;
  REP(num, 10000) {
    ivec a(10);
    int x = num;
    REP(i, 4) {
      int d = x % 10;
      a[d] = 1;
      x /= 10;
    }
    bool ok = true;
    REP(i, 10) {
      if (s[i] == 'o' && a[i] != 1) ok = false;
      if (s[i] == 'x' && a[i] != 0) ok = false;
    }
    if (ok) ans++;
  }
  print(ans);
  return 0;
}