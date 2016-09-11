#include<iostream>
#include<cmath>
#define PI 3.14159265359

using namespace std;

int main(){
  int d, a = 90, a2;
  double x,y;
  char c;
  while(cin >> d >> c >> a2){
    if(d == 0 && a == 0) break;
    else{
      double rad = a * (PI / 180.0);
      x += d * cos(rad);
      y += d * sin(rad);
      a += a2;
    }
  }
  cout << -(int)x << "\n" << (int)y << endl;
}
