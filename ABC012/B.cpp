#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define rAll(v) v.rbegin(), v.rend()
using namespace std;

int main() {
  int n;
  cin >> n;
  int h = n / 60/ 60;
  int m = (n / 60 ) % 60; 
  int s = ((n % 60 ) % 60); 
  cout << setfill('0') << right << setw(2) << h << ":" << setfill('0') << right << setw(2) << m << ":" << setfill('0') << right << setw(2) << s << endl;
  return 0;
}