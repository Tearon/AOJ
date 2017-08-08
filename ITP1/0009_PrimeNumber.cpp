#include<iostream>
using namespace std;
const int N_MAX = 999999;
int main(){
    int n, cnt;
    while(cin >> n){
        bool is_prime[N_MAX] = {false};
        is_prime[1] = true;
        for(int i = 2; i*i <= n; i++){ 
            if(!is_prime[i]){
                for(int j = i; i*j <= n; j++){
                    is_prime[i*j] = true;
                }
            }
        }
        cnt = 0;
        for(int k = 1; k <= n; k++){
            if(!is_prime[k]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}