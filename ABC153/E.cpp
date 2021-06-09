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
const ll INF = 1000000000000000000LL;

struct mint {
  ll x;
  mint(ll x = 0) : x((x % mod + mod) % mod) {}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res *= a;
  }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod - 2); }
  mint& operator/=(const mint a) { return (*this) *= a.inv(); }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
};

mint factorial(ll n) {
  mint answer = 1;
  while (n > 1) {
    answer *= n;
    n--;
  }
  return answer;
}

mint combination(ll n, ll r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}

mint permutation(ll n, ll r) { return factorial(n) / factorial(n - r); }

// setprecision(8) 桁数指定
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

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

vector<ll> Eratosthenes(const ll N) {
  bool is_prime[1000000 + 1];
  vector<ll> P;
  for (ll i = 0; i <= N; i++) {
    is_prime[i] = true;
  }
  for (ll i = 2; i <= N; i++) {
    if (is_prime[i]) {
      for (ll j = 2 * i; j <= N; j += i) {
        is_prime[j] = false;
      }
      P.emplace_back(i);
    }
  }
  return P;
}

typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
  double costA = (double)a.second / a.first;
  double costB = (double)b.second / b.first;
  return costA < costB;
}

// int main() {
//   int h, n;
//   cin >> h >> n;
//   vector<pair<ll, ll>> ab(n);
//   vector<pair<ll, ll>> xy(n);
//   REP(i, n) {
//     int a, b;
//     cin >> a >> b;
//     ab[i].first = a;
//     ab[i].second = b;
//     xy[i].first = a;
//     xy[i].second = b;
//   }
//   sort(ALL(ab), compare_by_b);
//   sort(ALL(xy), cmp);
//   puts("-------");
//   REP(i, n) {
//     cout << xy[i].first << " " << xy[i].second << " "
//          << (double)xy[i].second / xy[i].first << endl;
//   }
//   ll ans = 0;
//   REP(i, n) {
//     if (h <= 0) break;
//     if (h >= xy[i].first) {
//       h -= xy[i].first;
//       ans += xy[i].second;
//       i--;
//       continue;
//     } else {
//       int a = n - 1;
//       REP(j, n) {
//         ll num1 = abs(h - xy[i].first);
//         ll num2 = abs(h - xy[j].first);
//         ll num3 = min(num1, num2);
//         a = (num3 == num1 ? j : j);
//       }
//       h -= xy[a].first;
//       ans += xy[a].second;
//       cout << "h: " << h << endl;
//       cout << "a: " << a << endl;
//     }
//   }
//   cout << "h: " << h << endl;
//   cout << "ans: " << ans << endl;

//   REP(i, n) {
//     if (h <= 0) break;
//     if (h > 0) {
//       h -= ab[0].first;
//       ans += ab[0].second;
//     }
//   }

//   cout << ans << endl;
//   return 0;
// }

int main() { return 0; }