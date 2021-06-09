#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 1; i <= (n); ++i)
using namespace std;

int sumDig(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n, a, b; cin >> n >> a >> b;
  int total;
  rep(i, n) {
    int sum;
    sum = sumDig(i);
    if (a <= sum && sum <= b) {
      total += i;
    }
  }
  cout << total << endl;
  return 0;
}