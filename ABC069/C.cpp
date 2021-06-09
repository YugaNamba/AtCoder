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

ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

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

int main() {
  int n;
  cin >> n;
  lvec a(n);
  REP(i, n) { cin >> a[i]; }
  ll count1 = 0;
  ll count2 = 0;
  ll count4 = 0;
  REP(i, n) {
    if (a[i] % 4 == 0) {
      count4++;
    } else if (a[i] % 2 == 0) {
      count2++;
    } else {
      count1++;
    }
  }
  if (count4 != 0 && count4 + 1 >= count1) {
    count4 -= count1;
    if (count2 % 2 == 0) {
      puts("Yes");
    } else if (count4 + 1 >= count2 % 2) {
      puts("Yes");
    } else {
      puts("No");
    }
  } else {
    if (count1 == 0) {
      puts("Yes");
    } else {
      puts("No");
    }
  }
  return 0;
}