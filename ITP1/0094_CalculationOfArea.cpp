#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double a, b;
  cin >> a >> b;
  double ans = (a * b) / 3.305785;
  cout << fixed << setprecision(6) << ans << "\n";
}
