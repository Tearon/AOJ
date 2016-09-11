#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int d;
    while(cin >> d){
        int n = 600 / d;
        long ans = 0;
        for(int i = 1; i < n; i++){
            ans += d * ( i * d * i * d );
        }
        cout << ans << endl;
    }
}
