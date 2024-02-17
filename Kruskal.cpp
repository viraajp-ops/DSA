#include<bits/stdc++.h>
using namespace std ;
class disjointSet{
    vector<int>parent , size;
    public:
    disjointSet(int val){
        size.resize(val,1);
        parent.resize(val,0);
        for (int i=0;i<val;i++){
            parent[i]=i;
        }
    }
    int findParent(int n){
        if (parent[n]==n)
        return n;
        return parent[n]=findParent(parent[n]);
    }
    void unionByRank(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);
        if (pu==pv)
        return;
        if (size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
        else {
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
    }
};
int main(){
    int E,V;
    cin>>E>>V;
    vector<vector<int>>edges;
    for (int i=0;i<E;i++){
        vector<int>temp;
        for(int j=0;j<3;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        edges.push_back(temp);
    }
    int sum=0;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int ,pair<int,int>>>,greater<pair<int ,pair<int,int>>>>pq;
    for (int i=0;i<E;i++){
        pq.push({edges[i][2],{edges[i][0],edges[i][1]}});
    }
    disjointSet ds(V);
    while (!pq.empty())
    {
        auto it=pq.top();
        int wt=it.first;
        int node1=it.second.first;
        int node2=it.second.second;
        if (ds.findParent(node1)!=ds.findParent(node2)){
            sum+=wt;
            ds.unionByRank(node1,node2);
        }
        pq.pop();
    }
    cout<<sum;
    return 0;
}