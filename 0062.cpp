#include<iostream>
#include<vector>
using namespace std;

int main(){
  string s;
  vector<int> data;
  while(cin >> s){
    data.clear();
    for(int i = 0; i < 10; i++){
      data.push_back(s[i]-'0');
      //??????????????°????????????
    }
    int cnt = 10;
    while(cnt != 1){
      vector<int> hoge;
      for(int i = 0; i + 1 < cnt; i++){
        hoge.push_back( (data[i] + data[i+1]) % 10 );
      }
      data = hoge;
      cnt--;
    }
    cout << data[0] << endl;
  }
}
