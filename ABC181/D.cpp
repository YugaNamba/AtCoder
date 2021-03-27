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

bool solve(string s) {
  if (s.size() == 1) {
    return s == "8";
  }
  if (s.size() == 2) {
    if (stoi(s)%8 == 0) return true;
    swap(s[0], s[1]);
    if (stoi(s) % 8 == 0) return true;
    return false;
  }
}

int main() {
  string s;
  cin >> s;
  
  print(solve(s) ? "Yes" : "No");
  return 0;
}