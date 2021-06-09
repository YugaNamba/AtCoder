#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n; 
  set <int> s;
  cin >> n;
  rep(i, n) {
    int d;
    cin >> d;
    s.insert(d);
  }
  cout << s.size() << endl;
  return 0;
}