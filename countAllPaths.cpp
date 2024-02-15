#include<bits/stdc++.h>
using namespace std ;
int isPossible(vector<vector<int>>paths){
    int row=paths.size();
    int col=row;
    int count =0;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if (paths[i][j]==1)
            count++;
        }
        if (count%2!=0)
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr (n,vector<int>(n,0));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int a;
            cin>>a;
            arr[i][j]=a;
        }
    }
    cout<<isPossible(arr);
    return 0;
}