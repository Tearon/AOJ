#include<iostream>
using namespace std;
int linearSearch(int A[], int n, int key){
    int i = 0;
    // 調査したい配列の最後にキーの要素を追加
    A[n] = key;
    while(A[i] != key) i++;
    // i = nの場合(= False)、keyはない
    // i != n場合(= True)、keyはある
    return i != n;
}
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
        if( linearSearch(S, n, key) ) cnt++;
    }
    cout << cnt << endl;
}