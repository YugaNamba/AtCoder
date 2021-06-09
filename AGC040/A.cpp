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

template <typename T>
void remove(std::vector<T>& vector, unsigned int index) {
  vector.erase(vector.begin() + index);
}

map<ll, ll> prime_factor(ll n) {
  map<ll, ll> ret;
  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}
// for (auto p : prime_factor(n)) {
//	while (p.second--) {
//		cout << p.first << endl;
//	}
//}

vector<ll> divisor(ll n) {
  vector<ll> ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

int main() {
  string s;
  cin >> s;
  vector<int> answer(s.size() + 1);
  int count = 0;
  char c = s[0];
  REP(i, s.size() + 1) {
    if (s[i] == c) {
      count++;
    } else if (c == '<') {
      // puts("<");
      int cc = 0;
      FOR(j, i - count, i) {
        answer[j] = cc;
        cc++;
      }
      c = s[i];
      count = 1;
    } else {
      // puts(">");
      int cc = max(count, max(answer[i - count - 1] + 1, 0));
      int ccc = 0;
      FOR(j, i - count, i) {
        answer[j] = cc;
        ccc++;
        cc--;
        cc = min(cc, count - ccc);
      }
      c = s[i];
      count = 1;
    }
    // cout << "count: " << count << endl;
  }

  if (s[s.size() - 1] == '<') {
    // puts("<");
    int cc = 0;
    FOR(j, s.size() - count, s.size() + 1) {
      answer[j] = cc;
      cc++;
    }
  } else {
    // puts(">");
    int cc = max(count, max(answer[s.size() - 1 - count - 1] + 1, 0));
    int ccc = 0;
    FOR(j, s.size() - count, s.size() + 1) {
      answer[j] = cc;
      ccc++;
      cc--;
      cc = min(cc, count - ccc);
    }
  }
  ll ans = 0;
  REP(i, answer.size()) {
    ans += answer[i];
    // cout << answer[i] << endl;
  }
  cout << ans << endl;
  return 0;
}

// < > > > < < > < < < < < > > > <
// 0 3 2 1 0 1 2 0 1 2 3 4 5 2 1 0 1
// 0 3 5 6   7 9  10121519242627  28
