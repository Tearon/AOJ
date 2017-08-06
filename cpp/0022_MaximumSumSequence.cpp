#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long n, i, a[5000], t, ans;
    while(cin >> n, n){
        for(i = 0; i < n; i++)
            cin >> a[i];
        ans = -100000;
        for(t = i = 0; i < n; i++){
            if(t < 0)
                t = a[i];
            else
                t += a[i];
            
            if(ans < t)
                ans = t;
        }
        cout << ans << endl;
    }
}