#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int arr[m][n];
    set<pair<int,int>>sack;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
            if (arr[i][j]==0){
                sack.insert(make_pair(i,j));
            }
        }
    }
    for (auto it:sack){
        for (int i=0;i<n;i++){
            arr[it.first][i]=0;
        }
        for (int i=0;i<m;i++){
            arr[i][it.second]=0;
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
