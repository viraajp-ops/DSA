#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    queue<int > given;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        given.push(a);
    }
    stack<int> st;
    for(int i=0;i<k;i++){
        int t= given.front();
        given.pop();
        st.push(t);
    }
    for(int i=0;i<k;i++){
        int t=st.top();
        st.pop();
        given.push(t);
    }
    for(int i=0;i<n-k;i++){
        int t=given.front();
        given.pop();
        given.push(t);
    }
    for(int i=0;i<n;i++){
        int t=given.front();
        cout<<t<<" ";
        given.pop();
    }
    return 0;
}