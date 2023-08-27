#include<bits/stdc++.h>
using namespace std;
int find_pivot(int arr[],int first,int last){
    int mid=(first+last)/2;
    if (arr[mid]>=arr[first] && arr[mid]<=arr[last])
    return -1;
    if (first==last-1 && arr[first]>arr[last])
    return last;
    else if (arr[mid]>arr[last])
    return find_pivot(arr,mid,last);
    else
    return find_pivot(arr,first,mid);
}
int binary_search(int arr[],int n,int first ,int last ,int target){
    if (first>=0 && last<=n-1 && first<=n-1 && last >=0 && first<=last){
    int mid=(first+last)/2;
    if (arr[mid]!=target && first==last)
    return -1;
    if (arr[mid]==target)
    return mid;
    else if (arr[mid]>target)
    return binary_search(arr,n,first,mid-1,target);
    else
    return binary_search(arr,n,mid+1,last,target);
    }
    else 
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int target;
    cin>>target; // Enter the target element
    int pivot=find_pivot(arr,0,n-1);
    if (pivot!=-1){
    if (arr[pivot]<=target && arr[n-1]>=target)
    cout<<binary_search(arr,n,pivot,n-1,target);
    else 
    cout<<binary_search(arr,n,0,pivot-1,target);
    }
    else 
    cout<<binary_search(arr,n,0,n-1,target);
    return 0;
}