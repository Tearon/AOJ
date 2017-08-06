#include<iostream>
using namespace std;
int main(){
    int s;
    double w, h;
    char c;
    while(cin >> s >> c >> w >> c >> h){
        double BMI = w / (h * h);
        if(BMI >= 25.0) 
            cout << s << endl;
    }
}
