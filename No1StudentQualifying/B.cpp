#include <bits/stdc++.h>
#include <unordered_map> 
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  ll n, k, count = 0;
  cin >> n >> k;
  vector<pair<int, int> > a(n);
  REP(i, n) {
    int tmp;
    cin >> tmp;
    a[i] = make_pair(tmp, 0);
  }
  
  REP(i, n) {
    REP(j, n) {
      if (a[i].first > a[j].first) a[i].second++;
    }
  }
  ll anser = 0;
  REP(i, n) {
    RREP(j, k + 1) {
      anser += a[i].second * j % mod;
    }
  }
  
  cout << anser << endl;
  return 0;
}