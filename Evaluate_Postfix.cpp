#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    stack<int> st;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if ((s[i]!= '*') && (s[i]!= '/')&& (s[i]!= '+') &&(s[i]!= '-') ){
            st.push(s[i]-'0');
        }
        else if (s[i]=='*'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push(b*a);
        }
        else if (s[i]=='+'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push(b+a);
        }
        else if (s[i]=='-'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push(b-a);
        }
        else if (s[i]=='/'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push(b/a);
        }
    }
    cout<<st.top();
    return 0;
}