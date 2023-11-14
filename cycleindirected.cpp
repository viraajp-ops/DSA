#include<bits/stdc++.h>
using namespace std;
vector<bool>visited;
vector<bool>path;
bool dfs(int start,vector<int>adj[]){
    visited[start]=true;
    path[start]=true;
    for(auto it : adj[start]){
        if (!visited[it]){
            if(dfs(it,adj)==true)
            return true;
        }
        else if (path[it]==true)
            return true;

    }
    path[start]=false;
    return false;
}
bool iscycle(int v,vector<int>adj[]){
    visited.assign(v,false);
    path.assign(v,false);
    for(int i=0;i<v;i++){
        if(!visited[i])
        {
            if(dfs(i,adj)==true)
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        vector<int>temp;
        int c;
        cin>>c;
        for(int j=0;j<c;j++){
            int b;
            cin>>b;
            temp.push_back(b);
        }
        adj[i]=temp;
    }
    cout<<iscycle(n,adj);
    return 0;
}