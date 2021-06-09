#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int deg;
  double dis; 
  cin >> deg >> dis;
  int w;
  string dir[] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W","WNW", "NW", "NNW"};
  deg = ((deg * 10 + 1125) / 2250) % 16;
  dis /= 60;
  dis =  round(dis * 10) / 10;
  if (dis <= 0.2) w = 0;
  else if (dis <= 1.5) w = 1;
  else if (dis <= 3.3) w = 2;
  else if (dis <= 5.4) w = 3;
  else if (dis <= 7.9) w = 4;
  else if (dis <= 10.7) w = 5;
  else if (dis <= 13.8) w = 6;
  else if (dis <= 17.1) w = 7;
  else if (dis <= 20.7) w = 8;
  else if (dis <= 24.4) w = 9;
  else if (dis <= 28.4) w = 10;
  else if (dis <= 32.6) w = 11;
  else if (32.7 <= dis) w = 12;
  
  if (w == 0) {
    cout << "C" << " " << w << endl;
    return 0;
  }
  cout << dir[deg] << " " << w << endl;
  return 0;
}