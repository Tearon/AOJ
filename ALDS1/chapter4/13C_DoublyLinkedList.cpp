#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    int q, x;
    char command[20];
    list<int> v;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> command;
        if(command[0] == 'i'){ //insert
            cin >> x;
            v.push_front(x);
        }else if(command[6] == 'L'){ // deleteLast
            v.pop_back();
        }else if(command[6] == 'F'){ // deleteFirst
            v.pop_front();
        }else if(command[0] == 'd'){ // delete
            cin >> x;
            for(list<int>::iterator it = v.begin(); it != v.end(); it++){
                if( *it == x ){
                    v.erase(it);
                    break;
                }
            }
        }
    }
    int i = 0;
    for(list<int>::iterator it = v.begin(); it != v.end(); it++){
        if( i++ ) cout << " ";
        cout << *it;
    }
    cout << endl;
}