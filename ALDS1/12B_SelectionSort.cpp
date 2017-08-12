#include<iostream>
using namespace std;
static const int N = 100;
void trace(int A[], int n){
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}
void SelectionSort(int A[], int n){
    int i,j,minj,cnt=0,tmp;
    for(i = 0; i < n-1; i++){
        minj = i;
        for(j = i; j < n; j++){
            if(A[j] < A[minj]){
                minj = j;
            }
        }
        if(A[i] != A[minj]){
            cnt++;
            tmp = A[i];
            A[i] = A[minj];
            A[minj] = tmp;
        }
    }
    trace(A,n);
    cout << cnt << endl;
}
int main(){
    int n;
    int A[N+1];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    SelectionSort(A,n);
}