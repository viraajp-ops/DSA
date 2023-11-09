#include<bits/stdc++.h>
using namespace std;
int numberOfTriangles(vector<vector<int>> graph,int n){
    int triangles=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i!=j && i!=k && j!=k && graph[i][j] && graph[j][k] && graph[k][i])
                triangles++;
            }
        }
    }
    return triangles/3;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>graph;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int b;
            cin>>b;
            temp.push_back(b);
        }
        graph.push_back(temp);
    }
    cout<<numberOfTriangles(graph,n);
    return 0;
}