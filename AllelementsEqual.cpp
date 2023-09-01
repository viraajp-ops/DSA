#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort (arr,arr+n);
    int cost=0;
    if (n%2==0){
        int median=(arr[n/2-1]+arr[n/2])/2;
        for(int i=0;i<n;i++)
        cost+=abs(arr[i]-median);
    }
    else 
    {
        int median=arr[n/2];
        for(int i=0;i<n;i++){
            cost+=abs(arr[i]-median);
        }
    }
    cout<<cost;
    return 0;
}