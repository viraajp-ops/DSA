#include<bits/stdc++.h>
using namespace std;
int atoi(string s){
    bool neg=false ;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if (i==0 && s[i]=='-'){
            neg=true;
        }
        else if (s[i]-'0'<0 || s[i]-'0'>9){
            return -1;
        }
        else {
            ans=ans*10 + (s[i]-'0');
        }
    }
    if (neg){
        return ans*-1;
    }
    else 
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<atoi(s);
    return 0;
}