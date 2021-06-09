#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

int main() {
  int n, x;
  cin >> n >> x;
  ll dis = 0;
  int count = 1;
  REP(i, n) {
    int l;
    cin >> l;
    dis += l;
    if (dis <= x) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}