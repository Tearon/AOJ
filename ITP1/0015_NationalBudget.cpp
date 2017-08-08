#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    string s1, s2, ans;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        ans = "";
        
        int m = max(s1.length(),s2.length());
        
        while(s1.length() < m)  s1 = "0" + s1;
        while(s2.length() < m)  s2 = "0" + s2;
        
        int c = 0;
        
        for(int i = m-1; i >= 0; i--){
            char ch = ((s1[i]-'0') + (s2[i]-'0') + c) % 10 + '0';
            c = ((s1[i]-'0') + (s2[i]-'0') + c) / 10;
            ans += ch;
        }
        
        if(c)   ans += c + '0';
        
        reverse(ans.begin(), ans.end());
        
        while(ans.length() > 1 && ans[0] == '0')
            ans.erase(ans.begin());
        
        if(ans.length() > 80)
            cout << "overflow" << endl;
        else
            cout << ans << endl;
    }

}