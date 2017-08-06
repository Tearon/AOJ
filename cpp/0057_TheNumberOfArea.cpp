#include<iostream>
using namespace std;

int NumofArea(int n){
  if(n == 1) return 2;
  else return n + NumofArea(n-1);
}

int main(){
  int n;
  while(cin >> n){
      int ans = NumofArea(n);
      cout << ans << endl;
  }
}
