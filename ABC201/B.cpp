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
  int n;
  cin >> n;
  svec s(n);
  ivec t(n);
  REP(i, n) cin >> s[i] >> t[i];
  int mCount = 0;
  for (int x : t) {
    mCount = max(mCount, x);
  }
  int m2Count = 0;
  int m2Index = 0;
  for (int i = 0; i < n; i++) {
    if (m2Count < t[i] && t[i] != mCount ) {
      m2Count = t[i];
      m2Index = i;
    }
  }
  print(s[m2Index]);
  return 0;
}