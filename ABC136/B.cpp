#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = m; i < (n); i++)
#define FORR(i, m, n) for (int i = (m); i > 0; i--)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
	int n;
	cin >> n;
	if (n < 10);
	else if (n < 100) n = 9;
	else if (n < 1000) n -= 90;
	else if (n < 10000) n = 909;
	else if (n < 100000) n -= 9090;
	else n = 90909;
	cout << n << endl;
	return 0;
}