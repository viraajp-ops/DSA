#include<bits/stdc++.h>
using namespace std ;
class disjointSet{
    vector<int>parent;
    vector<int>size;
    vector<int>visited;
    public:
    disjointSet(int n){
        parent.resize(n,0);
        size.resize(n,1);
        visited.resize(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findParent(int val){
        if (parent[val]==val)
        return val;
        return parent[val]=findParent(parent[val]);
    }
    void unionBySize(int u,int v){
        int pu=parent[u];
        int pv=parent[v];
        if (pu==pv)
        return;
        if (size[pu]>size[pv]){
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
        else {
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
    }
    int components(int n){
        int ans =0;
        for (int i=0;i<n;i++){
            int fp=findParent(i);
            if (visited[fp]==0){
                visited[fp]=1;
                ans++;
            }
        }
        return ans ;
    }
};
int makeConnected(int n,vector<vector<int>>connections){
    disjointSet ds(n);
    int extraCables=0;
    for (int i=0;i<connections.size();i++){
        if (ds.findParent(connections[i][0])==ds.findParent(connections[i][1])){
            extraCables++;
        }
        else {
            ds.unionBySize(connections[i][0],connections[i][1]);
        }
    }
    int comp=ds.components(n)-1;
    if (extraCables >= comp){
        return comp;
    }
    else 
    return -1;
}
int main(){
    int n;
    cin>>n;
    int edges;
    cin>>edges;
    vector<vector<int>>connections;
    for(int i=0;i<edges;i++){
        int a,b;
        cin>>a>>b;
        connections.push_back({a,b});
    }
    cout<<makeConnected(n,connections);
    return 0;
}