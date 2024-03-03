#include<bits/stdc++.h>
using namespace std ;
int countSquares(vector<vector<int>>& matrix) {
    int ans =0;
    int m=matrix.size();
    int n=matrix[0].size();
    for (int i=m-2;i>=0;i--){
        for (int j=n-2;j>=0;j--){
            if (matrix[i][j]!=0){
                matrix[i][j]=min(matrix[i+1][j],min(matrix[i][j+1],matrix[i+1][j+1]))+1;
            }
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            ans+=matrix[i][j];
        }
    }
    return ans ;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix (m,vector<int>(n,0));
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<countSquares(matrix);
    return 0;
}