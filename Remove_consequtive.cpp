#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int pos=0;
    while (pos<s.length() && s.length()>1)
    {
        if (s[pos]!=s[pos+1]){
            pos++;
        }
        else{
            s.erase(pos,1);
        }
    }
    cout<<s;
    return 0;
}