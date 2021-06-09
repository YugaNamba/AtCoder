#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  set<int> pp;
  pp.insert(a);
  pp.insert(b);
  REP(i, k) {
    int p;
    cin >> p;
    pp.insert(p);
  }
  
  cout << (pp.size() == k + 2? "YES" : "NO") << endl;
  return 0;
}