#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n, numbers[] = {1, 2, 3, 4, 5, 6};
  cin >> n;
  rep(i, n) {
    swap(numbers[i % 5], numbers[(i % 5) + 1]);
  }
  rep(i, 6) {
    cout << numbers[i];
  }
  cout << endl;
  return 0;
}