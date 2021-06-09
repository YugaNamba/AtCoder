#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ng(3);
  rep(i, 3) {
    cin >> ng[i];
  }
  sort(rAll(ng));
  bool flag = true;

  rep(i, 100) {

  }


  if (ng[2] + 2 == ng[0]) {
    flag = false;
  } else if (n < 299) {
    flag = false;
  } else if (ng[0] == ng[1] == ng[2] || n < 299) {
    flag = false;
  } else if (ng[0] + ng[1] || n < 299) {
    flag = false;
  } 
  
  cout << (flag? "YES" : "NO") << endl;
  return 0;
}