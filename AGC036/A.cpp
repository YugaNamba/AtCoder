#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int s; cin >> s;
  int a = s / 2;
  int b;
  int h;

  for (int i = a; i > 0; i--) {
    for (int j = 0; i < a; i++) {
      if (i * j / 2 == a) {
        b = i; 
        h = j;
      }
    }
  }
  vector<int> anser(6);
  anser[0] = 0;
  anser[1] = 0;
  anser[2] = b;
  anser[3] = 0;
  anser[4] = b/2;
  anser[5] = h;
  for (int i = 0; i < 6; i++) {
    cout <<  anser[i] << endl;
  }
  return 0;
}