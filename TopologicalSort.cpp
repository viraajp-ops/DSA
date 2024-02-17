#include<bits/stdc++.h>
using namespace std ;
void dfs(int node,vector<int>&visited,stack<int>&st,vector<int>adj[]){
    visited[node]=1;
    for (auto it:adj[node]){
        if (!visited[it]){
            dfs(it,visited,st,adj);
        }
    }
    st.push(node);
}
vector<int>topoSort(int V,vector<int>adj[]){
    vector<int>visited(V,0);
    stack<int>st;
    for(int i=0;i<V;i++){
        if (!visited[i]){
            dfs(i,visited,st,adj);
        }
    }
    vector<int>ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans ;
}
int main(){
    int n;
    cin>>n;
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        vector<int>temp;
        int v;
        cin>>v;
        for(int i=0;i<v;i++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        adj[i]=temp;
    }
    vector<int>ans=topoSort(n,adj);
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}