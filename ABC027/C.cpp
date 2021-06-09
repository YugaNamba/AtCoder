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
  ll n, x = 1, count = 0;
  cin >> n;
  
  ll keyNumber = n / 2 + 1;
  while (x <= n) {
    count++;
    
  }

  cout << (count % 2 == 0 ? "Takahashi" : "Aoki") << endl;
  return 0;
}