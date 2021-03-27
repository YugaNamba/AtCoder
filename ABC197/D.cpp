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
  int n, x0, y0, xn, yn;
  cin >> n >> x0 >> y0 >> xn >> yn;
  double x1, y1;
  int p = 180 * (n - 2)/2;
  int p2 = 180 - p;
  double rad = p * (M_PI / 180);
  double rad2 = p2 * (M_PI / 180);
  double si = atan(yn - y0);
  double c = (xn - x0) / si;
  double c2 = c / 2;
  double a = 2 * c2 * cos(rad);
  x1 = x0 + cos(rad2) * a;
  y1 = y0 + sin(rad2) * a;
  cout << fixed << setprecision(10) << (x1) << " " << (y1) << "\n";
  return 0;
}