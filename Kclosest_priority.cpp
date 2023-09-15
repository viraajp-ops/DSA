#include<bits/stdc++.h>
using namespace std;
int find_cross(int arr[],int start,int end,int finding){
    if (start<=end){
    if (arr[end]<=finding)
    return end;
    if (arr[start]>finding)
    return start;
    int mid=(start+end)/2;
    if (arr[mid]<=finding && arr[mid+1]>finding)
    return mid;
    if (arr[mid]<finding){
        return find_cross(arr,mid+1,end,finding);
    }
    return find_cross(arr,start,mid-1,finding);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int X;
    cin>>X;
    int cross=find_cross(arr,0,n-1,X);
    int next=cross+1;
    int count=0;
    if (arr[cross]==X)
    cross--;
    while (cross>=0 && next<n && count<k)
    {
        if (abs(arr[cross]-X)>=abs(arr[next]-X)){
            cout<<arr[next]<<" ";
            next++;
        }
        else {
            cout<<arr[cross]<<" ";
            cross--;
        }
        count++;
    }
    while (cross>=0 && count <k)
    {
        cout<<arr[cross];
        cross--;
        count++;
    }
    while (next<n && count<k)
    {
        cout<<arr[next];
        next ++;
        count++;
    }
    return 0;
}