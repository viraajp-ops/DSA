#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int a=0;
    int b=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if (i%2==0){
            a=a*10+arr[i];
        }
        else 
        b=b*10+arr[i];
    }
    cout<<a+b;
    return 0;
}