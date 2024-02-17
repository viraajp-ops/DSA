#include<bits/stdc++.h>
using namespace std ;
bool isNegativeWeightCycle(int n,vector<vector<int>>edges){
    //the the source be 0
    if (n==1)
	    return 0;
	    vector<int>dist(n,1e8);
	    dist[edges[0][0]]=0;
	    for(int i=0;i<n-1;i++){
	        for (auto it: edges){
	            int u=it[0];
	            int v=it[1];
	            int wt=it[2];
	            if (u!=1e8 && dist[u]+wt<dist[v]){
	                dist[v]=dist[u]+wt;
	            }
	        }
	    }
	    for (auto it: edges){
	            int u=it[0];
	            int v=it[1];
	            int wt=it[2];
	            if (u!=1e8 && dist[u]+wt<dist[v]){
	                return 1;
	            }
	    }
	    return 0;
}
int main(){
    int n;
    cin>>n;
    int E;
    cin>>E;
    vector<vector<int>>edges;
    for(int i=0;i<E;i++){
        int a;
        cin>>a;
        int b;
        cin>>b;
        int c;
        cin>>c;
        edges.push_back({a,b,c});
    }
    cout<<isNegativeWeightCycle(n,edges);
    return 0;
}