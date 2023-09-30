#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=0;
    // A new way of handeling functions 
    for(int i=0,j=n-1;i<=j;){
        if (arr[i]==arr[j]){
            i++;
            j--;
        }
        else if (arr[i]<arr[j]){
            ans++;
            arr[i+1]=arr[i]+arr[i+1];
            i++;
        }
        else {
            ans++;
            arr[j-1]=arr[j]+arr[j-1];
            j--;
        }
    }
    cout<<ans;
    return 0;
}