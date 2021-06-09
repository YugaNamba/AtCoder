#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  int n, a, b, anser = 0;
  cin >> n >> a >> b;
  REP(i, n) {
    string s;
    int d;
    cin >> s >> d;
    if (d < a) d = a;
    else if (d > b) d = b;
    if (s == "West") anser -= d;
    else anser += d;
  }

  if (anser < 0) {
    cout << "West" << " " << abs(anser) << endl;
    return 0;
  } else if (anser == 0) {
    cout << 0 << endl;
    return 0;
  } else {
    cout << "East" <<  " " << abs(anser) << endl;
    return 0;
  }
}