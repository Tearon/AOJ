#include<iostream>
#include <string.h> 
using namespace std;
#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

// 文字から数値に変換
int getChar(char ch){
    if(ch == 'A') return 1;
    else if(ch == 'B') return 2;
    else if(ch == 'C') return 3;
    else if(ch == 'D') return 4;
    else return 0;
}
// 文字列から数値に変換してkeyを生成
long long getKey(char str[]){
    long long sum = 0, p = 1;
    for(int i = 0; i < strlen(str); i++){
        sum += p*(getChar(str[i]));
        p *= 5;
    }
    return sum;
}

int h1(int key){
    return key % M;
}
int h2(int key){
    return 1 + (key % (M-1));
}

int find(char str[]){
    long long key, i, h;
    key = getKey(str);
    for(int i = 0;; i++){
        h = (h1(key) + i*h2(key)) % M;
        if(strcmp(H[h],str) == 0)
            return 1;
        else if(strlen(H[h]) == 0)
            return 0;
    }
    return 0;
}

int insert(char str[]){
    long long key, i, h;
    key = getKey(str);
    for(int i = 0;; i++){
        h = (h1(key) + i*h2(key)) % M;
        if(strcmp(H[h],str) == 0)
            return 1;
        else if(strlen(H[h]) == 0){
            strcpy(H[h], str);
            return 0;
        }
    }
    return 0;
}

int main(){
    int n, h;
    char command[9], str[L];
    for(int i = 0; i < M; i++) H[i][0] = '\0';
    cin >> n;
    while(n--){
        cin >> command >> str;
        if(command[0] == 'i'){
            insert(str);
        }else{
            if(find(str))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}