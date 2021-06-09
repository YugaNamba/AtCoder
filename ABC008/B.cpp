#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
  int n;
  cin >> n;
  
  map<string, int> s;
  string winner = "";
  int count = 0;
  rep(i, n) {
    string tmp;
    cin >> tmp;
    s[tmp]++;
    if (s[tmp] > count) {
      count = s[tmp];
      winner = tmp;
    }
  }

  cout << winner << endl;
  return 0;
}