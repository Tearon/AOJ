#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100000
int A[MAX], n;
int partition(int p, int r){
    int x = A[r];
    int i = p - 1;
    for(int j = p; j < r; j++){
        if( A[j] <= x ){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    int q = partition(0, n-1);

    for(int j = 0; j < n; j++){
        if(j) cout << " ";
        if(j == q) cout << "[";
        cout << A[j];
        if(j == q) cout << "]";
    }
    cout << endl;
}