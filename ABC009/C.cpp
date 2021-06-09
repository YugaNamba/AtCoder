#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
  int n, k, c = 0;
  string s1, s2;
  cin >> n >> k >> s1;
  vector<char> ss(n);
  rep(i, n) {
    ss[i] = s1.at(i);
  }
  sort(all(ss));
  rep(i, n) {
   s2 += ss[i]; 
  }
  rep(i, n) {
    if (s1.at(i) != s2.at(i)) {
      s1.at(i) = s2.at(i);
      c++;
    }
    if (c == k) {
      break;
    }
  }
  cout << s1 << endl;
  return 0;
}