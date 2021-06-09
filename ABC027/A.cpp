#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  int l1, l2, l3;
  cin >> l1 >> l2 >> l3;
  if (l1 == l2) cout << l3 << endl;
  else if (l1 == l3) cout << l2 << endl;
  else cout << l1 << endl;
  return 0;
}