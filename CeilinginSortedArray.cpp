#include<bits/stdc++.h>
using namespace std;
int binary (int arr[],int first,int last,int key){
    if(first<=last){
        int mid=(first+last)/2;
        if (arr[mid]==key)
        return arr[mid];
        if (first==last && arr[mid]>key)
        return arr[mid];
        if(arr[mid]>key)
        return binary(arr,first,mid,key);
        if (arr[mid]<key)
        return binary(arr,mid+1,last,key);
    }
    else return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int pos=binary(arr,0,n-1,key);
    cout<<pos;
    return 0;
}