#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  char s[1001];
  cin >> s;
  int count = 1;
  REP(i, strlen(s)) {
    if (s[i] == s[i + 1]) count++;
    else {
      cout << s[i] << count;
      count = 1;
    }
  }
  cout << endl;
  return 0;
}