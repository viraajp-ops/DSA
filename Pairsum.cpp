#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    sort(arr,arr+n);
    int ptr=n-1;
    int sum=0;
    while (ptr>0)
    {
        if (arr[ptr]-arr[ptr-1]<k){
            sum+=(arr[ptr]+arr[ptr-1]);
            ptr-=2;
        }
        else 
        ptr--;
    }
    cout<<sum;
    return 0;
}