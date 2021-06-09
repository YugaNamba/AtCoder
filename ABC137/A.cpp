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
  int a , b;
  cin >> a >> b;
  int p = a + b;
  int m = a - b;
  int k = a * b;
  
  cout << max(max(p, m), k) << endl;
  return 0;
}