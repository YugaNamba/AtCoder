#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  vector<int> a(3);
  REP(i, 3) {
    cin >> a[i];
  }
  sort(ALL(a));
  cout << a[1] << endl;
  return 0;
}