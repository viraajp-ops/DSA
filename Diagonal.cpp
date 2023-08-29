#include<bits/stdc++.h>
using namespace std;
vector<int>downwardDiagonal(int n,vector<vector<int>>arr){
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ans.push_back(arr[j][i-j]);
        }
    }
    for(int i=1;i<=n-1;i++){
        int col=n-1;
        for(int j=i;j<=n-1;j++){
            ans.push_back(arr[j][col]);
            col--;
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        vector<int>test;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            test.push_back(a);
        }
        arr.push_back(test);
    }
    vector<int>ans=downwardDiagonal(n,arr);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}