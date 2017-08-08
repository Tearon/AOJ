#include<iostream>
using namespace std;
int main(){
    double w;
    while(cin >> w){
        if(w <= 48.00)
            cout << "light fly" << endl;
        else if(w <= 51.00)
            cout << "fly" << endl;
        else if(w <= 54.00)
            cout << "bantam" << endl;
        else if(w <= 57.00)
            cout << "feather" << endl;
        else if(w <= 60.00)
            cout << "light" << endl;
        else if(w <= 64.00)
            cout << "light welter" << endl;
        else if(w <= 69.00)
            cout << "welter" << endl;
        else if(w <= 75.00)
            cout << "light middle" << endl;
        else if(w <= 81.00)
            cout << "middle" << endl;
        else if(w <= 91.00)
            cout << "light heavy" << endl;
        else
            cout << "heavy" << endl;
    }
}
