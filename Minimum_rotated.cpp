#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>arr,int first ,int last){
    while (first<last)
    {
        int mid=(first+last)/2;
        if (arr[first]<=arr[mid] && arr[mid]<=arr[last])
        return arr[first];
        if (mid==last-1 && arr[mid]>arr[last])
        return arr[last];
        if (arr[mid]>arr[first]){
            return binary(arr,mid,last);
        }
        else 
        return binary(arr,first,mid);
    }
    if (first == last)
    return arr[first];
}
int findMin(vector<int>arr){
    return binary(arr,0,arr.size()-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<findMin(arr);
    return 0;
}