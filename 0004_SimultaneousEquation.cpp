#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    while( cin >> a >> b >> c >> d >> e >> f ){
        double y = (a*f - c*d) / (a*e - b*d);
        double x = (c - b*y) / a;        
        cout << fixed << setprecision(3);
        cout << x << " " << y << endl;
    }

    return 0;
}