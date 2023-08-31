#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    map<int,int>mp;
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    for(auto it:mp)
    {
        if (it.second>count)
        {
            count=it.second;
            ans=it.first;
        }
    }
    cout<<ans;
    return 0;
}