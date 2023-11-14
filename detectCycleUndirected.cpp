#include<bits/stdc++.h>
using namespace std;
vector<bool>visited;
bool dfs(int start_pos,vector<int>adj[],int parent){
    visited[start_pos]=true;
    for(auto it: adj[start_pos]){
        if (!visited[it])
        {
            if (dfs(it,adj,start_pos)==true)
            return true;
        }
        else if (visited[it] && it!=parent)
        return true;
    }
    return false;
}
bool isCycle(int v,vector<int>adj[]){
    visited.assign(v,false);
    for(int i=0;i<v;i++){
        if (!visited[i]){
            if (dfs(i,adj,-1)==true)
            return true;
        }
    }
    return false;
}
int main(){
    int v;
    cin>>v;
    //here v is the number if nodes
    int e;
    cin>>e;
    //here e is the number of edges
    vector<int>adj[v];
    for(int i=0;i<v;i++){
        vector<int>temp;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int b;
            cin>>b;
            temp.push_back(b);
        }
        adj[i]=temp;
    }
    cout<<isCycle(v,adj);
    return 0;
}