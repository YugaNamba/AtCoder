#include <bits/stdc++.h>
#define FOR(i, m, n) for (ll i = m; i < (n); i++)
#define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
//#define print(ele) cout << (ele) << "\n"
#define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

void print() { cout << endl; }

template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) != 0) cout << " ";
  print(forward<Tail>(tail)...);
}

int main() {
  ll n, k;
  cin >> n >> k;
  lvec a(n);
  REP(i, n) cin >> a[i];
  REP(i, n) a[i]--;
  set<ll> st;

  ll z = 1e9;
  ll now = 0;
  st.insert(now);
  ll next = a[now];

  REP(i, 1e8) {
    now = next;
    // print(now);
    ll x = st.size();
    st.insert(now);
    next = a[now];
    ll y = st.size();
    if (x == y) {
      ll num = i + 2;
      z = n + k % num;
      // print(num, "num");
      break;
    }
  }
  now = 0;
  next = a[now];
  // print(z, "z");
  if (z == 1e9) {
    z = k % n;
  }
  REP(i, z) {
    now = next;
    if (i + 1 == z) {
      print(now + 1);
      return 0;
    }
    next = a[now];
  }
  return 0;
}