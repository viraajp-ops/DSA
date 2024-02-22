#include<bits/stdc++.h>
using namespace std ;
void computing(int n,int open , int close ,string st,vector<string>&ans){
    if (open==close && open==n){
        ans.push_back(st);
    }
    if (open<n){
        st+='(';
        computing(n,open+1,close,st,ans);
        st.pop_back();
    }
    if (close<open){
        st+=')';
        computing(n,open,close+1,st,ans);
        st.pop_back();
    }
}
vector<string>generateParenthesis(int n){
    vector<string>ans;
    string st ="";
    int open,close;
    open=0;
    close=0;
    computing(n,open,close,st,ans);
    return ans ;
}
int main(){
    int n;
    cin>>n;
    vector<string>ans=generateParenthesis(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}