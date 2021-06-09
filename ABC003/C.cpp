#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int count = 0;
  vector<int> rateVec;
  rep(i, n) {
    int r;
    cin >> r;
    rateVec.push_back(r);
  }
  sort(rateVec.begin(), rateVec.end());
  double rate = 0;
  for (int i = n - k; i < n; i++) {
    rate = (rate + rateVec[i]) / 2;
  }
  cout << fixed << setprecision(6) << rate << endl;
  return 0;
}