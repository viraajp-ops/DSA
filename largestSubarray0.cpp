#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int>arr, int n){
    map<int,int>mapping;
    int ans=INT_MIN;
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
        if (sum==0){
            ans=max(ans,i+1);
        }
        else if (mapping.find(sum)==mapping.end()){
            mapping[sum]=i;
        }
        else {
            ans=max(ans,i-mapping[sum]);
        }
    }
    return ans ;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<maxLen(arr,n);
    return 0;
}