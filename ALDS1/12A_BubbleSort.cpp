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
void BubbleSort(int A[], int n){
    int cnt = 0, flag = 1;
    while(flag){
        flag = 0;
        for(int j = n-1; j > 0; j--){
            if(A[j] < A[j-1]){
                int tmp;
                tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                flag = 1;
                cnt ++;
            }
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
    BubbleSort(A,n);
}