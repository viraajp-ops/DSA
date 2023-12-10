#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[],int n){
    map<int,int>mapping;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if (sum==0)
        return true;
        if (mapping[sum]!=0)
        return true;
        mapping[sum]++;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // we need to give a sum of 0 with positives and negatives 
    cout<<subArrayExists(arr,n);
    return 0;
}