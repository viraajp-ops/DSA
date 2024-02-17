#include<bits/stdc++.h>
using namespace std ;
void shortest_distance(vector<vector<int>>&matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (matrix[i][j]==-1){
                matrix[i][j]=1e8;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int m=0;m<n;m++){
                if (matrix[j][i]!=1e8 || matrix[i][m]!=1e8)
                matrix[j][m]=min(matrix[j][m],matrix[j][i]+matrix[i][m]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (matrix[i][j]==1e8){
                matrix[i][j]=-1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    shortest_distance(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}