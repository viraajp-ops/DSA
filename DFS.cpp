#include<bits/stdc++.h>
using namespace std;
vector<int>visited;
void dfs(int v,vector<vector<int>>iter,int position){
    if (visited[position]==1)
    return ;
    else {
        visited[position]=1;
        cout<<position<<" ";
        for(int i=0;i<iter[position].size();i++){
            dfs(v,iter,iter[position][i]);
        }
        return;
    }
};
int main(){
    int v;
    // v here represents the number of nodes numbered from 0 to v-1
    cin>>v;
    vector<vector<int>>adj;
    for(int i=0;i<v;i++){
        vector<int>temp;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int b;
            cin>>b;
            temp.push_back(b);
        }
        adj.push_back(temp);
    }
    for(int i=0;i<v;i++)
    visited.push_back(0);
    dfs(v,adj,0);
    return 0;
}