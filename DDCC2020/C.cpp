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

bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    return a.first < b.first;
  }
}

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<char>> s(h, vector<char>(w));
  REP(i, h) {
    REP(j, w) { cin >> s[i][j]; }
  }

  int count = 1;
  vector<vector<int>> ans(h + 1, vector<int>(w + 1));
  REP(i, h) {
    int wCount = 0;
    bool isNew = true;
    REP(j, w) {
      if (s[i][j] == '#') {
        wCount++;
      }
    }
    if (wCount == 0) {
      continue;
    } else {
      REP(j, w) {
        if (s[i][j] == '#') isNew = false;
        if (isNew) {
          ans[i][j] = count;
        } else {
          if (s[i][j] == '#') {
            isNew = false;
            count++;
            if (count != 1) {
              ans[i][j] = count - 1;
            } else {
              ans[i][j] = count - 1;
            }
          }
          if (s[i][j] == '.') {
            ans[i][j] = count - 1;
          }
        }
      }
    }
  }

  REP(i, h) {
    REP(j, w) {
      if (ans[i][j] == 0) {
        if (i == 0) {
          int cnt = 1;
          while (1) {
            if (ans[i + cnt][j] != 0) {
              break;
            } else {
              cnt++;
            }
          }
          for (int k = cnt; i >= 1; i--) {
            ans[i][j] = ans[i + k][j];
          }
        } else {
          int cnt = 1;
          while (1) {
            if (ans[i - cnt][j] != 0) {
              break;
            } else {
              cnt++;
            }
          }
          for (int k = cnt; i >= 1; i--) {
            ans[i][j] = ans[i - k][j];
          }
        }
      }
    }
  }

  REP(i, h) {
    REP(j, w) { cout << ans[i][j] << " "; }
    cout << endl;
  }
  return 0;
}