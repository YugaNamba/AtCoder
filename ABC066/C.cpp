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

ll combination(ll n, ll r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}

ll permutation(ll n, ll r) { return factorial(n) / factorial(n - r); }

int main() {
  int n;
  cin >> n;
  deque<ll> a;
  REP(i, n) {
    ll tmp;
    cin >> tmp;
    if (i % 2 == 0) {
      a.push_back(tmp);
    } else {
      a.push_front(tmp);
    }
  }
  if (n % 2 == 1) {
    RREP(i, a.size()) { cout << a[i] << endl; }
  } else {
    REP(i, a.size()) { cout << a[i] << endl; }
  }
  return 0;
}