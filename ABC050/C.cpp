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
  set<int> a;
  vector<int> aa;
  int count = 0;
  REP(i, n) {
    int tmp;
    cin >> tmp;
    if (tmp != 0) {
      a.insert(tmp);
      aa.push_back(tmp);
    } else {
      count++;
    }
  }
  sort(ALL(aa));

  for (int i = 0; i < n - 1; i += 2) {
    if (aa[i] != aa[i + 1]) {
      cout << 0 << endl;
      return 0;
    }
  }
  if (count > 1) {
    cout << 0 << endl;
    return 0;
  }
  int aSize = a.size();
  ll anser = (aSize == n / 2 ? aSize * aSize : 0);
  cout << anser << endl;
  return 0;
}