#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    // ベクタの戦闘要素から順にアクセス
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it;
    }
    cout << endl;
}

int main(){
    int N = 4;
    vector<int> v;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    // 一度出力してみる
    print(v);

    vector<int>::iterator it = v.begin();
    *it = 3; // 銭湯の要素を3にする
    it++; //一つ前の要素に進める
    (*it)++; // v[1]の要素に1を加算

    print(v);
}