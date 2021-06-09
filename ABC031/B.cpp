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
  int l, h, n;
  cin >> l >> h >> n;
  int a[n];
  REP(i, n) {
    int tmp;
    cin >> tmp;
    if (tmp > h) a[i] = -1;
    else if (tmp >= l && tmp <= h) a[i] = 0;
    else a[i] = l - tmp;
  }
  REP(i, n) {
    cout << a[i] << endl;
  }
  return 0;
}