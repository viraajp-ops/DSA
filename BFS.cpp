#include<bits/stdc++.h>
using namespace std;
queue<int>order;
vector<int>visited;
void bfs(int v,vector<vector<int>> adj){
    int visited[v]={0};
    queue<int>order;
    order.push(0);
    while (order.size()!=0)
    {
        int front=order.front();
        order.pop();
        cout<<front<<" ";
        for(auto it: adj[front]){
            if (visited[it]==0)
            {
                order.push(it);
                visited[it]=1;
            }
        }
    }
    return;
};
int main(){
    int v;
    cin>>v;
    // here v represents the number of nodes
    vector<vector<int>>adj;
    for(int i=0;i<v;i++){
        int n;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            int b;
            cin>>b;
            temp.push_back(b);
        }
        adj.push_back(temp);
    }
    for(int i=0;i<v;i++){
        visited.push_back(0);
    }
    order.push(0);
    bfs(v,adj);
    return 0;
}