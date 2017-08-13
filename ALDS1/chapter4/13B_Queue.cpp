#include<iostream>
#include <queue>
#include<utility>
using namespace std;

typedef pair<string, int> process;

int main(){
    int n, q, total = 0;
    queue<process> Q;
    cin >> n >> q;
    for (int i = 0; i < n; i++){
        process P;
        cin >> P.first >> P.second;
        Q.push(P);
    }
    while(!Q.empty()){
        process P = Q.front();
        Q.pop();
        if(P.second <= q){
            total += P.second;
            cout << P.first << " " << total << endl;
        }else{
            total += q;
            P.second -= q;
            Q.push(P);
        }
    }
}