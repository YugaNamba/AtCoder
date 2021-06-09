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
  int n, q;
  cin >> n >> q;
  vector<ivec> s(q, ivec(3));
  REP(i, q) {
    cin >> s[i][0];
    if (s[i][0] == 1) {
      cin >> s[i][1] >> s[i][2];
      s[i][1]--;
      s[i][2]--;
    } else {
      cin >> s[i][1];
      s[i][1]--;
    }
  }

  string initS;
  REP(i, n) initS += 'N';

  svec ans(n, initS);

  REP(i, q) {
    int s1 = s[i][0];
    int userA = s[i][1];
    if (s1 == 1) {
      int userB = s[i][2];
      ans[userA][userB] = 'Y';
    } else if (s1 == 2) {
      REP(userB, n) {
        if (ans[userB][userA] == 'Y') {
          ans[userA][userB] = 'Y';
        }
      }
    } else {
      string sc = ans[userA];
      REP(userX, n) {
        if (ans[userA][userX] == 'Y') {
          REP(k, n) {
            if (ans[userX][k] == 'Y') {
              if (k == userA) continue;
              sc[k] = 'Y';
            }
          }
        }
      }
      ans[userA] = sc;
    }
  }
  REP(i, n) print(ans[i]);
  return 0;
}