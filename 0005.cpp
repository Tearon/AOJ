#include<iostream>
#include<cmath>
using namespace std;

long long a,b;

long long gcd(long long x,long long y){
  if(y == 0)
    return x;
  else
    return gcd(y, x % y);
}
long long lcm(long long x,long long y){
    return (x * y) / gcd(x, y);
}

int main(){
  while(cin >> a >> b){
    cout << gcd(a ,b) << " " << lcm(a, b) << endl;
  }
  return 0;
}
