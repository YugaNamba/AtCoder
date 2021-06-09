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
  vector<int> score(n);
  int sum = 0;
  int minScore = 101;
  REP(i, n) {
    cin >> score[i];
    sum += score[i];

    if (score[i] % 10 != 0) {
      minScore = min(minScore, score[i]);
    }
  }

  if (sum % 10 != 0) {
    cout << sum << endl;
  } else {
    if (minScore != 101) {
      sum -= minScore;
      cout << sum << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}