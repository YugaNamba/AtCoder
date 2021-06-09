#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  int a, b, anser;
  cin >> a >> b;
  int length = to_string(b).length();

  anser = a * (pow(10, length));
  anser += b;
  anser *= 2;
  cout << anser << endl;
  return 0;
}