#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int m;
    cout<<"enter the number of children";
    cin>>m;
    int mindiff=INT_MAX;
    for(int i=m-1;i<n;i++){
        mindiff=min(arr[i]-arr[i+1-m],mindiff);
    }
    cout<<"the minimum difference is: "<<mindiff<<endl;
    return 0;
}