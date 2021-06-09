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
  ll n, m, l;
  cin >> n >> m >> l;
  ll c[m];
  REP(i, m) {
    ll a, b;
    cin >> a >> b >> c[i];
  }
  ll q;
  cin >> q;
  vector<ll> moveTo;
  REP(i, q) {
    ll s, t;
    cin >> s >> t;
    s--;
    t--;
    moveTo.push_back(s);
    moveTo.push_back(t);
  }
  // REP(i, m) { cout << c[i] << endl; }
  // cout << "------" << endl;
  ll l2 = l;
  ll count = 0;
  for (ll i = 0; i < q * 2 - 1; i += 2) {
    if (moveTo[i] > moveTo[i + 1]) {
      RFOR(j, moveTo[i], moveTo[i + 1] + 1) {
        l2 -= c[j];
        if (l2 < 0) {
          l2 += l;
          count++;
          if (l2 < 0) {
            cout << -1 << endl;
            break;
          }
        }
      }
      cout << count << endl;
      count = 0;
      l2 = l;
    } else {
      FOR(j, moveTo[i + 1], moveTo[i] - 1) {
        l2 -= c[j];
        if (l2 < 0) {
          l2 += l;
          count++;
          if (l2 < 0) {
            cout << -1 << endl;
            break;
          }
        }
      }
      cout << count << endl;
      count = 0;
      l2 = l;
    }
  }
  return 0;
}