#include<iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    int a, b;
    string s;
    stack<int> x;
    while(cin >> s){
        if(s == "+"){
            a = x.top(); x.pop();
            b = x.top(); x.pop();
            x.push(a+b);
        }
        else if(s == "-"){
            a = x.top(); x.pop();
            b = x.top(); x.pop();
            x.push(b-a);
        }
        else if(s == "*"){
            a = x.top(); x.pop();
            b = x.top(); x.pop();
            x.push(a*b);
        }else{
            x.push(atoi(s.c_str()));
    }
    cout << x.top() << endl;
}