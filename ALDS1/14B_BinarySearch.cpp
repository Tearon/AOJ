#include<iostream>
using namespace std;
int BinarySearch(int A[], int n, int key){
    int left = 0;
    int right = n;
    while(left < right){
        int mid = (left+right) / 2;
        if(A[mid] == key) 
            return 1;
        if(A[mid] > key) 
            right = mid;
        else if(A[mid] < key)
            left = mid + 1;
    }
    return 0;
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
        if( BinarySearch(S, n, key) ) cnt++;
    }
    cout << cnt << endl;
}