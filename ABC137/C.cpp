// #include <bits/stdc++.h>
// #define FOR(i, m, n) for (int i = m; i < (n); i++)
// #define FORR(i, m, n) for (int i = (m); i > 0; i--)
// #define REP(i, n) FOR(i, 0, n)
// #define ALL(v) v.begin(), v.end()
// #define RALL(v) v.rbegin(), v.rend()
// using namespace std;
// typedef long long ll;
// const int mod = 1e9 + 7;

// int main() {
//   int n, count = 0;
//   cin >> n;
//   vector<string> s(n);
//   REP(i, n) {
//     vector<char> tmp(10);
//     REP(j, 10) {
//       cin >> tmp[j];
//     }
//     sort(ALL(tmp));
//     REP(j, 10) {
//       s[i] += tmp[j];
//     }
//     REP(j, n - 1) {
//       if (s[j] == s[i]) {
//         count++;
//       }
//     }
//   }
//   set<string> ss;
//   map<string, int> sss;
//   REP(i, n) {
//     sss[s[i]] = 0;
//   }
//   REP(i, n) {
//      map<string, int>::iterator it = sss.find(s[i]);
//     if (it != sss.end()) { // 見つかった
//       sss[s[i]] += 1;
//     }
//   }
  
//   REP(i, n) {
//     set<string>::iterator iti = ss.find(s[i]);    // find() で要素が見つかれば、要素へのイテレータが得られる。
//     if (iti == ss.end()) {
//         // 要素が見つからなかった。
//     } else {
//         // 要素が見つかった。
//     }

//     ss.insert(s[i]);
//     cout << s[i] << endl;
//   }
//   cout << n - ss.size() << endl;
//   return 0;
// }

#include <bits/stdc++.h>
#define FOR(i, m, n) for (long long i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  map<string, int> m;
  REP(i, n) {
    string s;
    cin >> s;
    sort(ALL(s));
    m[s]++;
  }

  ll anser = 0;
  for (auto& p : m) {
    int s = p.second;
    anser += (ll)s * (s - 1) / 2;
  }

  cout << anser << endl;
  return 0;
}
