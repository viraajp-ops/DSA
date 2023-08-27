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
    map<int,int>mp;
    bool found=false;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==0)
        mp[arr[i]]++;
        else 
        {
            found=true;
            break;
        }
    }
    if (found)
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}