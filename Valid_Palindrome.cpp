#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string ans="";
    for(int i=0;i<s.length();i++){
        if (tolower(s[i])>='a' && tolower(s[i])<='z'){
            ans+=tolower(s[i]);
        }
        else{}
    }
    bool palin=true;
    for(int i=0;i<ans.length();i++){
        if (ans[i]!=ans[ans.length()-1-i])
        {
            palin=false;
            break;
        }
    }
    if (palin)
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}