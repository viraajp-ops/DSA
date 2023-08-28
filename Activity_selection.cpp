#include<bits/stdc++.h>
using namespace std;
bool sortbysec(pair<int,int>&a,pair<int,int>&b){
    return (a.second<b.second);
}
int main(){
    int n;
    cin>>n;
    int start[n],end[n];
    cout<<"Enter the start days";
    for(int i=0;i<n;i++)
    cin>>start[i];
    cout<<"Enter the end days";
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        ans.push_back(make_pair(start[i],end[i]));
    }
    int count =1;
    sort(ans.begin(),ans.end(),sortbysec);
    int pos=0;
    for(int i=0;i<n-1;i++){
        if (ans[pos].second<ans[i+1].first){
            count++;
            pos=i+1;
        }
    }
    cout<<count;
    return 0;
}