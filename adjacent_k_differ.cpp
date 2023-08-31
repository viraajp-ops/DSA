#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x, int k){
    for(int i=0;i<n;i++){
        if (arr[i]==x)
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x,k;
    cin>>x>>k;
    cout<<search(arr,  n,  x,  k);
    return 0;
}