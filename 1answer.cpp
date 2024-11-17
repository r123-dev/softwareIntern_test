#include<bits/stdc++.h>
using namespace std;


int main() {
   

   string s;cin>>s;
   int rot;cin>>rot;
    int cnt = 1;
     string ans = "";
    string temp = "";
    for (char ch : s) {
        if (!isalpha(ch)) {
            temp += ch;
        } else 
           {
             char t = isupper(ch) ? 'A' : 'a';
            temp += (ch - t + rot) % 26 + t;}
        
    }
    
   
   

    for (int i = 1; i < temp.length(); ++i) {
        if (temp[i] != temp[i - 1]) {
            ans += temp[i - 1];
            if (cnt > 1) {
                ans += to_string(cnt);
            }
            cnt = 1;
        } else {
           
        
           cnt++;
        }
    }
    
    ans += temp.back();
    if (cnt > 1) {
        ans += to_string(cnt);
    }

    
    cout<<ans;
    
    
    
    
}