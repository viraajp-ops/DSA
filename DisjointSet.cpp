#include<bits/stdc++.h>
using namespace std ;
class disjointSet{
    //A disjoint set has 2 operation -> finding parent and union
    //Also , union can be done in two ways, either through rank and through size (size referring to the number of elements in that connected component)
    vector<int>rank ;
    vector<int>parent;
    vector<int>size;
    public:
    disjointSet(int n){
        rank.resize(n+1,0);//can be n+1 for 1 based indexing
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
        size.resize(n+1,1); //Initialised to 1
    }
    int findParent(int val){
        if (val==parent[val])
        return val;
        else return parent[val]=findParent(parent[val]); // the equality here is implementing the path compression
    }
    void unionByRank(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);
        if (pu==pv) return;
        if (rank[pu]<rank[pv]){
            parent[pu]=pv;
        }
        else if (rank[pu]>rank[pv]){
            parent[pv]=pu;
        }
        else {
            parent[pu]=pv;
            rank[pv]++;   // Rank is changing only here 
        }
    }
    void unionBySize(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);
        if (pu==pv) return;
        if (size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
        else {
            parent[pv]=pu;
            size[pu]+=size[pv];  // Rank is changing only here 
        }
    }
};
int main(){
    disjointSet ds(7);
    ds.unionBySize(1,2); //Shift + Alt +Up/Down
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    if (ds.findParent(3)==ds.findParent(7)){
        cout<<"Same\n";
    }
    else 
    cout<<"Not Same\n";
    ds.unionBySize(3,7);
    if (ds.findParent(3)==ds.findParent(7)){
        cout<<"Same\n";
    }
    else 
    cout<<"Not Same\n";
}