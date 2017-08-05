#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int l;
    cin >> l;
    while(l--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if( a[2]*a[2] == a[1]*a[1] + a[0]*a[0] ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}