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
  ll n, k;
  cin >> n >> k;
  ll s[n];
  int count = 0;
  REP(i, n) {
    cin >> s[i];
  }
  int anser;
  if (k == 0) {
    anser = 0;
  } else {

  }
  cout << anser << endl;
  return 0;
}