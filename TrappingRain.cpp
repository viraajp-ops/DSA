#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // array preprocessing use karenge ham yahan
    int left [n],right[n];
    left [0]=arr[0];
    int prev=left[0];
    for(int i=1;i<n;i++){
        if (arr[i]>prev){
            left[i]=arr[i];
            prev=arr[i];
        }
        else {
            left[i]=prev;
        }
    }
    int next=arr[n-1];
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if (arr[i]>next){
            right[i]=arr[i];
            next=arr[i];
        }
        else 
        right[i]=next;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=min(left[i],right[i])-arr[i];
    }
    cout<<ans;
    return 0;
}