#include<bits/stdc++.h>
using namespace std;
int longestSubsequence(int n, int arr[])
{
    int ans=1;
    vector<int>sums;
    sums.assign(n,1);
    for(int i=n-2;i>=0;i--){
        int b=0;
        for(int j=i+1;j<n;j++){
            if (arr[i]-arr[j]==1 || arr[i]-arr[j]==-1){
                b=max(b,sums[j]);
            }
        }
        sums[i]+=b;
        ans=max(ans,sums[i]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< longestSubsequence(n,arr);
    return 0;
}