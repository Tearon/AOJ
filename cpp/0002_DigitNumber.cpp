#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        int c = a + b;
        cout << to_string(c).length() << "\n";
    }

    return 0;
}