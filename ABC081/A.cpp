#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string s; cin >> s;
  int count = 0;
  rep(i, s.size()) {
    if (s.at(i) == '1') {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}