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
  string n;
  cin >> n;
  char op[] = {'+', '-'};
  REP(i, 2) {
    REP(j, 2) {
      REP(k, 2) {
        int total = n[0] - '0';
        if (op[i] == '+') {
          total += n[1] - '0';
        } else {
          total -= n[1] - '0';
        }
        if (op[j] == '+') {
          total += n[2] - '0';
        } else {
          total -= n[2] - '0';
        }
        if (op[k] == '+') {
          total += n[3] - '0';
        } else {
          total -= n[3] - '0';
        }
        if (total == 7) {
          cout << n[0] << op[i] << n[1] << op[j] << n[2] << op[k] << n[3]
               << "=7" << endl;
          ;

          return 0;
        }
      }
    }
  }
}