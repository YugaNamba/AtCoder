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
  int n, count = 0;
  string s;
  cin >> s >> n;
  vector<char> ss(5);
  REP(i, 5) {
    ss[i] = s.at(i);
  }
  sort(ALL(ss));

  REP(i, 5) {
    REP(j, 5) {
      count++;
      if (count == n ) {
        cout << ss[i] << ss[j] << endl;
        return 0;   
      }
    } 
  }
}