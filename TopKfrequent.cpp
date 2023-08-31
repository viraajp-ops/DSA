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
    sort (arr,arr+n);
    int count=0;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        if (i==0)
        count++;
        else {
            if (arr[i-1]==arr[i])
            count++;
            else {
                ans.push_back(make_pair(count,arr[i-1]));
                count=1;
            }
        }
    }
    ans.push_back(make_pair(count,arr[n-1]));
    sort(ans.begin(),ans.end());
    vector<int>test;
    for(int i=(ans.size()-k);i<ans.size();i++){
        test.push_back(ans[i].second);
    }
    for(int i=0;i<k;i++){
        cout<<test[i]<<" ";
    }
    return 0;
}