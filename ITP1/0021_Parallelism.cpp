#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    float x[4], y[4];
    for(int i -= 0; i < n; i++){
        cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
        if(abs((x[3]-x[2]) * (y[1]-y[0]) - (x[1]-x[0]) * (y[3]-y[2])) < 1e-10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}