#include<bits/stdc++.h>
using namespace std ;
int jump(vector<int>&nums){
    if (nums.size()==1)
    return 0;
    vector<int> visited(nums.size(),-1);
    visited[0]=0;
    for (int i=0;i<nums.size();i++){
        for (int j=i+1;j<=i+nums[i];j++){
            if (j<nums.size()){
                if (visited[j]!=-1)
                visited[j]=min(visited[j],1+visited[i]);
                else 
                visited[j]=1+visited[i];
            }
            else {
                break;
            }
        }
    }
    return visited[nums.size()-1];
}
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<<jump(nums);
    return 0;
;}