#include<bits/stdc++.h>
using namespace std ;
int orangesRotting(vector<vector<int>>& grid) {
    int time =0;
    int m=grid.size();
    int n=grid[0].size();
    queue<pair<pair<int,int>,int>>qu;
    int freshOranges=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (grid[i][j]==2){
                qu.push({{i,j},0});
            }
            if (grid[i][j]==1)
            freshOranges++;
        }
    }
    if (freshOranges==0)
    return 0;
    while (qu.size()>0)
    {
        auto it =qu.front();
        qu.pop();
        int row = it.first.first;
        int col=it.first.second;
        int t=it.second;
        time= max(time, t);
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,-1,1};
        for (int i=0;i<4;i++){
            int nrow=row+dx[i];
            int ncol=col+dy[i];
            if (nrow>=0 && nrow<m && ncol>=0 && ncol<n)
            if (grid[nrow][ncol]==1){
                qu.push({{nrow,ncol},time+1});
                grid[nrow][ncol]=2;
                freshOranges--;
            }
        }
    }
    if (freshOranges>0)
    return -1;
    return time ;
    
}
int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n,0));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cout<<orangesRotting(grid);
    return 0;
}