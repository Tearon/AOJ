#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int in[5];
  for(int i = 0; i < 5; i++)
    cin >> in[i];
  
  sort(in, in+5, greater<int>());
  
  for(int i = 0; i < 4; i++)
    cout << in[i] << " ";
  
  cout << in[4] << endl;
}
