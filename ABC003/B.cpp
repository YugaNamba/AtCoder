#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

bool checkChar(char);

int main() {
  string s, t;
  cin >> s >> t;
  bool isMatched = true;
  // replace(s.begin(), s.end(), '@', 'a');
  rep(i, s.size()) {
    if (s[i] == t[i]) continue;
    if (s[i] == '@') {
        if (checkChar(t[i])) continue;
    }
    if (t[i] == '@') {
        if (checkChar(s[i])) continue;
    }
    isMatched = false;
  }
  cout << (isMatched? "You can win" : "You will lose") << endl;
  return 0;
}

bool checkChar(char c) {
  switch(c) {
    case 'a':
    case 't':
    case 'c':
    case 'o':
    case 'd':
    case 'e':
    case 'r':
    case '@':
      return true;
    default:
      return false;
  }
}