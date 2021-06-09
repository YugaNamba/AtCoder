#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
  string s;
  cin >> s;
  int sI;
  int zI;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s.at(i) == 'A') {
      sI = i;
      break;
    }
  }
  for (int i = n - 1; i > 0; i--) {
    if (s.at(i) == 'Z') {
      zI = i;
      break;
    } 
  }
  cout << zI - sI + 1 << endl;
}
