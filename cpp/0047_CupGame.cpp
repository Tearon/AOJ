#include<iostream>
using namespace std;
int main(){
    char c1, c2, d, ball = 'A';
    while( cin >> c1 >> d >> c2 ){
        if( c1 == ball )
            ball = c2;
        else if( c2 == ball )
            ball = c1;
    }
    cout << ball << endl;
}