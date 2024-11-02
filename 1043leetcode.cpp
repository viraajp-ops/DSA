#include<bits/stdc++.h>
using namespace std ;
int f(vector<int>&arr, int k){
    vector<int>dp(arr.size()+1,0);
    for (int i=arr.size()-1;i>=0;i--){
        int lenC=0;
        int maxi=INT_MIN;
        int ans=INT_MIN;
        int len=arr.size();
        for (int j=i ; j<min(len,i+k);j++){
            lenC++;
            maxi=max(maxi,arr[j]);
            int sum = maxi*lenC + dp[j+1];
            ans=max(ans,sum);
        }
        dp[i]=ans;
    }
    return dp[0];
}
int maxSumAfterPartitioning(vector<int>& arr, int k) {
    return f(arr,k);
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
    // hello
}