#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    int counter=0;
    int pos=0;
    while (k>=1)
    {
        counter++;
        if (pos<n && arr[pos]==counter){
            pos++;
        }
        else 
        k--;
    }
    cout<<counter;
    return 0;
    
}