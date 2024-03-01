#include<bits/stdc++.h>
using namespace std ;
int f(vector<int>&arr, int k ,int ind,vector<int>&dp){
    if (ind==arr.size())
    return 0;
    if (dp[ind]!=-1)
    return dp[ind];
    int len=arr.size();
    int lenC=0;
    int maxi=INT_MIN;
    int ans=INT_MIN;
    for (int i=ind;i<min(len,ind+k);i++){
        lenC++;
        maxi=max(maxi,arr[i]);
        int sum = maxi*lenC + f(arr,k,i+1,dp);
        ans=max(ans,sum);
    }
    return dp[ind]=ans ;
}
int maxSumAfterPartitioning(vector<int>& arr, int k) {
    vector<int>dp(arr.size(),-1);
    return f(arr,k,0,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<maxSumAfterPartitioning(arr,k);
    return 0;
}