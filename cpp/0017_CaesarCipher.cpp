#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        // the も this も that も見つからなかった場合
        while(s.find("the") == string::npos && s.find("this") == string::npos && s.find("that") == string::npos){
            for(int i = 0; i < s.length(); i++){
                if(s[i] == 'z')
                    s[i] = 'a';
                else if(s[i] >= 'a' && s[i] <= 'z')
                    s[i]++;
            }
        }
        cout << s << endl;
    }
}
