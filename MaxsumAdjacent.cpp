#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int incl=arr[0];
    int excl=0;
    for(int i=1;i<n;i++){
        int excl_new=max(incl,excl);
        incl=excl+arr[i];
        excl=excl_new;
    }
    cout<<max(excl,incl);
    return 0;
}