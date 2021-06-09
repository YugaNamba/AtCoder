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
  int n, pepleCount = 0;
  cin >> n;
  int a[n];
  REP(i, n) {
    cin >> a[i];
    pepleCount += a[i];
  }

  if (pepleCount % n != 0) {
    cout << -1 << endl;
    return 0;
  }

  int average = pepleCount / n;
  int bridgeCount = 0;
  pepleCount = 0;
  REP(i, n) {
    pepleCount += a[i];
    if (average * (i + 1) != pepleCount) bridgeCount++;
  }

  cout << bridgeCount << endl;
  return 0;
}