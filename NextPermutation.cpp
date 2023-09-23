#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int last_peak=-1;
    for(int i=1;i<n;i++){
        if (arr[i-1]<arr[i]){
            last_peak=i;
        }
    }
    if (last_peak==-1)
    sort(arr,arr+n);
    else {
        int last_one=last_peak-1;
        for(int i=last_peak+1;i<n;i++){
            if (arr[i]>arr[last_one] && arr[i]<arr[last_peak]){
                last_peak=i;
            }
        }
        int temp=arr[last_one];
        arr[last_one]=arr[last_peak];
        arr[last_peak]=temp;
        sort (arr+last_one+1,arr+n);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}