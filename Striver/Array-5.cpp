#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counting[3]={0};
    for (int i=0;i<n;i++){
        counting[arr[i]]++;
    }
    int pos=0;
    for (int i=0;i<3;i++){
        for (int j=0;j<counting[i];j++){
            arr[pos]=i;
            pos++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}