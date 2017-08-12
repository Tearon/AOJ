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
void InsertionSort(int A[], int n){
    for(int i = 1; i < n; i++){
        int targetA = A[i];
        int j = i - 1;
        while( j >= 0 && A[j] > targetA){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = targetA;
        trace(A,n);
    }
}
int main(){
    int n;
    int A[N+1];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    trace(A,n);
    InsertionSort(A,n);
}