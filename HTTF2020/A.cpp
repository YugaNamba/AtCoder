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
  int n, m, b, gy, gx;
  cin >> n >> m >> b >> gy >> gx;
  vector<vector<int>> grid(n, vector<int>(n));
  grid[gy][gx] = 7;
  vector<pair<int, int>> r(m);
  char c[m];
  REP(i, m) { cin >> r[i].first >> r[i].second >> c[i]; }
  REP(i, b) {
    int y, x;
    cin >> y >> x;
    grid[y][x] = -1;
  }

  vector<vector<char>> guide(n, vector<char>(n, 'x'));
  ll guideCount = 0;
  REP(i, n) {
    REP(j, n) {
      if (grid[i][j] != -1 && grid[i][j] != 7) {
        int u = 0, r = 0, d = 0, l = 0;
        RREP(ui, n) {
          if (grid[ui][j] == -1) {
            break;
          } else {
            u = abs(i - ui + 1);
          }
        }
        REP(rj, n) {
          if (grid[i][rj] == -1) {
            break;
          } else {
            r = abs(j - rj - 1);
          }
        }
        REP(di, n) {
          if (grid[di][j] == -1) {
            break;
          } else {
            d = abs(i - di - 1);
          }
        }
        RREP(lj, n) {
          if (grid[i][lj] == -1) {
            break;
          } else {
            l = abs(j - lj + 1);
          }
        }
        int ml = max(max(u, r), max(d, l));
        if (ml != 0) {
          guideCount++;
        }
        if (ml == 0) {
        } else if (ml == u) {
          guide[i][j] = 'U';
          REP(uu, u - 1) { grid[i - uu][j] = -1; }
        } else if (ml == r) {
          guide[i][j] = 'R';
          REP(rr, r - 1) { grid[i][j + rr] = -1; }
        } else if (ml == d) {
          guide[i][j] = 'D';
          REP(dd, d - 1) { grid[i + dd][j] = -1; }
        } else {
          guide[i][j] = 'L';
          REP(lll, l - 1) { grid[i][j - lll] = -1; }
        }
      }
    }
  }

  cout << "-------------" << endl;

  cout << guideCount << endl;
  REP(i, n) {
    REP(j, n) {
      if (guide[i][j] != 'x') {
        cout << i << " " << j << " " << guide[i][j] << endl;
      }
    }
  }
  return 0;
}
