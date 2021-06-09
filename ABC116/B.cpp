#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << (ele) << endl
#define print10(ele) cout << fixed << setprecision(10) << (ele) << endl

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int f(int n) {
  if (n % 2)
    return 3 * n + 1;
  else
    return n / 2;
}

int main() {
  int s;
  set<int> a;
  cin >> s;
  a.insert(s);
  int count = 1;
  while (1) {
    count++;
    int sb = a.size();
    s = f(s);
    a.insert(s);
    int sa = a.size();
    if (sb == sa) break;
  }
  print(count);
  return 0;
}