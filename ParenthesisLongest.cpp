#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int open=0;
    int close=0;
    int res=0;
    for(int i=0;i<s.size();i++){
        if (s[i]=='('){
            open++;
        }
        else
        close++;
        if (close==open)
        res=max(res,open+close);
        else if (close>open){
            close=0;
            open=0;
        }
    }
    open=0;
    close=0;
    for(int i=s.size()-1;i>=0;i--){
        if (s[i]=='('){
            open++;
        }
        else
        close++;
        if (close==open)
        res=max(res,open+close);
        else if (close<open){
            close=0;
            open=0;
        }
    }
    cout<<res;
}