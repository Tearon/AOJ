#include<iostream>
using namespace std;
int n, A[50];
// i番目以降の要素を使ってmを作れる場合trueを返す
int solve(int i, int m){
    int res;
    // solve(0,m)まで達した -> yes
    if( m == 0 ) return 1;
    // Aの要素数を超えたしまった
    if( i >= n ) return 0;

    //iばんめの要素を使う場合と使わない場合に分岐させて、再帰させて再帰させて…どこかでm == 0になればtrueを返す
    return res = solve(i+1,m) || solve(i+1,m-A[i]);
}
int main(){
    int q, m;
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> A[i];
    cin >> q;
    for(int j = 0; j < q; j++){
        cin >> m;
        if( solve(0,m) ) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}