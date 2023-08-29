#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    string ans="";
    for(int i=0;i<s.length();i++){
        if ((s[i]>='a' && s[i]<='z' )||(s[i]>='A' && s[i]<='Z') ||(s[i]>='0' &&s[i]<='9'))
        ans+=s[i];
        else if (s[i]=='^'){
        while (!st.empty() && st.top()=='^')
        {
            ans=+st.top();
            st.pop();
        }
        st.push('^');
        }
        else if (s[i]=='(')
        st.push('(');
        else if (s[i]==')')
        {
            while (!st.empty() && st.top()!='(')
            {
                ans+=st.top();
                st.pop();
            }
            if (!st.empty() && st.top()=='(')
            st.pop();
        }
        else if (s[i]=='*' || s[i]=='/'){
            while (!st.empty()&& (st.top()=='^' || st.top()=='*'|| st.top()=='/'))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else if (s[i]=='+' || s[i]=='-'){
            while (!st.empty() && (st.top()=='^' || st.top()=='*' ||st.top()=='/' || st.top()=='+' ||st.top()=='-'))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    
    cout<<ans;
    return 0;
}