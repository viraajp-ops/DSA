#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int cost=0;
    sort(arr,arr+n);
    int pos=0;
    int got=0;
    while (got<n)
    {
        cost+=arr[pos];
        pos++;
        got+=1+k;
    }
    cout<<cost;
    return 0;
}