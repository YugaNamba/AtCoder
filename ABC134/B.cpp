#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
  int N;
  int D;
  cin >> N >> D;
  int anser = N / ((D * 2) + 1);
  if (N % ((D * 2) + 1) != 0) anser++;
  cout << anser << endl;
}