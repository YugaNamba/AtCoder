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

ll factorial(ll n) {
  ll answer = 1;
  while (n > 1) {
    answer *= n;
    answer %= mod;
    n--;
  }
  return answer;
}

ll calcNumOfCombination(ll n, ll r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}

ll calcNumOfPermutation(ll n, ll r) { return factorial(n) / factorial(n - r); }

int main() {
  ll n, m;
  cin >> n >> m;
  if (abs(n - m) > 1) {
    cout << 0 << endl;
    return 0;
  }
  ll nf, mf;
  if ((n + m) % 2 == 0) {
    nf = factorial(n);
    mf = factorial(m);
    cout << 2 * (nf * mf) % mod << endl;
  } else {
    nf = factorial(n);
    mf = factorial(m);
    cout << nf * mf % mod << endl;
  }
  return 0;
}