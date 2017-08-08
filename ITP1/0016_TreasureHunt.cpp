#include<iostream>
#include<cmath>
#define PI 3.14159265359

using namespace std;

int main(){
  // 最初に北(+90°)を向いている
  int d, i = 90, a;
  double x,y;
  char c;
  while(cin >> d >> c >> a){
    if(d == 0 && a == 0) break;
    else{
      double rad = i * (PI / 180.0);
      x += d * cos(rad);
      y += d * sin(rad);
      i += a;
    }
  }
  cout << -(int)x << "\n" << (int)y << endl;
}
