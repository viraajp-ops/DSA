//This algo is used to calculate the number of strongly connected components 
#include<bits/stdc++.h>
using namespace std ;
void dfs(int node,vector<vector<int>>&adj,vector<int>&visited,stack<int>&st){
    visited[node]=1;
    for(auto it:adj[node]){
        if (!visited[it])
        dfs(it,adj,visited,st);
    }
    st.push(node);
}
void dfs2(int node,vector<vector<int>>&adj,vector<int>&visited){
    visited[node]=1;
    for (auto it:adj[node]){
        if (!visited[it])
        dfs2(it,adj,visited);
    }
}
int kosaraju(int V,vector<vector<int>>&adj){
    //step 1-> Get the finishing time stack
    stack<int>st;
    vector<int>visited(V,0);
    for (int i=0;i<V;i++){
        if (visited[i]==0)
        dfs(i,adj,visited,st);
    }
    //Step 2. reverse the adj matrix
    vector<vector<int>>adjT;
    for(int i=0;i<V;i++){
        vector<int>temp;
        adjT.push_back(temp);
    }
    for(int i=0;i<V;i++){
        visited[i]=0;
        for (auto it:adj[i]){
            adjT[it].push_back(i);
        }
    }
    //Step 3 -> do dfs again 
    int ans=0;
    while (!st.empty())
    {
        int node =st.top();
        st.pop();
        if (!visited[node]){
            ans ++;
            dfs2(node,adjT,visited);
        }
    }
    return ans ;
}
int main(){
    int V;
    cin>>V;
    vector<vector<int>>adj;
    for(int i=0;i<V;i++){
        vector<int>temp;
        int a;
        cin>>a;
        for(int j=0;j<a;j++){
            int c;
            cin>>c;
            temp.push_back(c);
        }
        adj.push_back(temp);
    }
    cout<<kosaraju(V,adj);
    return 0;
}