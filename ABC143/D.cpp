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
  vector<int> l(n);
  REP(i, n) { cin >> l[i]; }

  sort(RALL(l));

  ll sum = 0;
  FOR(a, 0, n - 2) {
    FOR(b, a + 1, n - 1) {
      FOR(c, b + 1, n) {
        if (l[a] < l[b] + l[c] && l[b] < l[c] + l[a] && l[c] < l[a] + l[b]) {
          sum++;
        }
      }
    }
  }

  cout << sum << endl;
  return 0;
}