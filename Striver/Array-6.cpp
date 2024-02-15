#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arrMin[n];
    int mini=arr[0];
    for (int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        arrMin[i]=min(mini,arr[i]);
    }
    int ans =0;
    int maxi=arr[n-1];
    for(int i=n-1;i>=0;i--){
        maxi=max(maxi,arr[i]);
        ans=max(ans,maxi-arrMin[i]);
    }
    cout<<ans;
    return 0;
}