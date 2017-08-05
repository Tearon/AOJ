#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int h[10];

    for(int i = 0; i < 10; i++){
        cin >> h[i];
    }
    
    int len = sizeof(h)/sizeof(h[0]);
    
    sort(h, h+len, greater<int>());

    for(int i =0; i < 3; i++){
        cout << h[i] << "\n";
    }

    return 0;
}

