#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& nums){
    vector<int>visited;
    visited.assign(nums.size(),1);
    for(int i=nums.size()-2;i>=0;i--){
        for(int j=i+1;j<nums.size();j++){
            if (nums[j]>nums[i]){
                visited[i]=max(visited[i],1+visited[j]);
            }
        }
    }
    int ans=0;
    for(auto num:visited){
        ans=max(ans,num);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        nums.push_back(b);
    }
    cout<< lengthOfLIS(nums);
    return 0;
}