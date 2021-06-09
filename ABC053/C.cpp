#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// using long long ll;

int main() {
  long x; cin >> x;
  int anser = (x / 11) * 2;
  if (x % 11 >= 6) {
    anser += 2;
  } else if (x != 0) {
    anser += 1;
  }
  cout << anser << endl;
}