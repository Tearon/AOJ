// 二分探索の問題をSTLのlower_boundを用いて実装しなおしてみる
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, q, key, cnt;
    cin >> n;
    int S[n];
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }
    cin >> q;
    for(int j = 0; j < q; j++){
        cin >> key;
        if( *lower_bound(S, S+n, key) == key ) cnt++;
    }
    cout << cnt << endl;
}