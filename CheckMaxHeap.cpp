#include<bits/stdc++.h>
using namespace std ;
bool isMaxHeap(int arr[],int n){
    for (int i=1;i<=n/2;i++){
        if (2*i-1<n)
        if (arr[i-1]>=arr[2*i-1]){}
        else return false;
        if (2*i<n)
        if (arr[i-1]>=arr[2*i]){}
        else return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isMaxHeap(arr,n);
    return 0;
}