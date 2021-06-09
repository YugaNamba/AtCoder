#include <bits/stdc++.h>
#define FOR(i, m, n) for (ll i = m; i < (n); i++)
#define RFOR(i, m, n) for (ll i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define print(ele) cout << (ele) << "\n"
#define print10(ele) cout << fixed << setprecision(10) << (ele) << "\n"

using namespace std;
typedef long long ll;
typedef vector<int> ivec;
typedef vector<string> svec;
typedef vector<ll> lvec;

const int mod = 1e9 + 7;
const ll INF = 1000000000000000000LL;

int main() {
  int n;
  cin >> n;
  ivec a(n);
  REP(i, n) {
    int x;
    cin >> x;
    x--;
    a[x]++;
  }
  int non = 0;
  int dob = 0;
  REP(i, n) {
    if (a[i] == 0) {
      non = i + 1;
    } else if (a[i] == 2) {
      dob = i + 1;
    }
  }
  if (!non) {
    print("Correct");
    return 0;
  }
  print(dob);
  print(non);
  return 0;
}