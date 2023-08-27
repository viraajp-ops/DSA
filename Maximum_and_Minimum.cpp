#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int Min=arr[0];
    int Max=arr[0];
    for(int i=0;i<n;i++){
        Min=min(Min,arr[i]);
        Max=max(Max,arr[i]);
    }
    cout<<"The largest element is :"<<Max<<endl;
    cout<<"The smallest element is :"<<Min<<endl;
    return 0;
}