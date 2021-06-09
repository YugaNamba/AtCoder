#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define RFOR(i, m, n) for (int i = (m - 1); i >= 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, n, 0)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  int a[n];
  double sum = 0;
  REP(i, n) {
    int tmp;
    cin >> tmp;
    a[i] = tmp;
    sum += tmp;
  }
  int average = round(sum / n);
  int anser = 0;
  REP(i, n) {
    anser += pow(a[i] - average, 2);
  }
  cout << anser << endl;
  return 0;
}