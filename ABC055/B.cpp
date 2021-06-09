#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  ll p = 1;
  for (int i = 1; i <= n; i++) {
    p *= i;
    p %= 1000000007;
  }
  cout << p << endl;
  return 0;
}