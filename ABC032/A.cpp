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
  int a, b, n;
  cin >> a >> b >>n;
  int number = n;
  while(1) {
    if (number % a == 0 && number % b == 0) {
      break;
    }
    number++;
  }
  cout << number << endl;
  return 0;
}