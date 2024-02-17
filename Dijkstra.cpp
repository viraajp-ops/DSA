#include<bits/stdc++.h>
using namespace std ;
vector<int>dijkstra(int V,vector<vector<int>>adj[],int S){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(V,INT_MAX);
    dist[S]=0;
    pq.push({0,S});
    while (!pq.empty())
    {
        auto it=pq.top();
        pq.pop();
        int distance=it.first;
        int node=it.second;
        for(int i=0;i<adj[node].size();i++){
            if (distance+adj[node][i][1]<dist[adj[node][i][0]]){
                dist[adj[node][i][0]]=distance+adj[node][i][1];
                pq.push({distance+adj[node][i][1],adj[node][i][0]});
            }
        }
    }
    return dist;
}
int main(){
    int V;
    cin>>V;
    vector<vector<int>>adj[V];
    for (int i=0;i<V;i++){
        vector<vector<int>>arr;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            int b;
            cin>>b;
            arr.push_back({a,b});
        }
        adj[i]=arr;
    }
    int s;
    cin>>s;
    vector<int>ans=dijkstra(V,adj,s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}