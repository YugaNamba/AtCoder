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

// int main() {
//   int n, m, q;
//   cin >> n >> m >> q;
//   ivec a(q), b(q), c(q), d(q);
//   REP(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];
//   REP(i, q) {
//     a[i]--;
//     b[i]--;
//   }
//   ivec nums(m);
//   REP(i, m) nums[i] = i + 1;
//   ll ans = 0;
//   do {
//     // if (nums[n - 2] > nums[n - 1]) continue;
//     // REP(i, m) { cout << nums[i] << " "; }
//     // cout << endl;
//     ll x = 0;
//     REP(i, q) {
//       if (nums[b[i]] - nums[a[i]] == c[i]) {
//         x += d[i];
//       }
//     }
//     ans = max(ans, x);
//   } while (next_permutation(ALL(nums)));

//   print(ans);
//   return 0;
// }

int n, m, q;
ivec a, b, c, d;
int ans;

void dfs(ivec A) {
  if (A.size() == n + 1) {
    int now = 0;
    REP(i, q) {
      if (A[b[i]] - A[a[i]] == c[i]) now += d[i];
    }
    ans = max(ans, now);
    return;
  }

  A.push_back(A.back());
  while (A.back() <= m) {
    dfs(A);
    A.back()++;
  }
}

int main() {
  cin >> n >> m >> q;
  a = b = c = d = ivec(q);
  REP(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];
  dfs(ivec(1, 1));
  print(ans);
  return 0;
}