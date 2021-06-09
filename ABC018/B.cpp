#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;

int main() {
  string s;
  int n;
  cin >> s >> n;
  REP(i, n) {
    int l, r;
    cin >> l >> r;
    reverse(&s[l-1], &s[r]);
  }
  cout << s << endl;
  return 0;
}