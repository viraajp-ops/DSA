#include<bits/stdc++.h>
using namespace std ;
bool jump(vector<int>&nums){
    if (nums.size()==1)
    return true;
    vector<int> visited(nums.size(),-1);
    visited[0]=0;
    for (int i=0;i<nums.size();i++){
        if (visited[i]==-1)
        return false;
        for (int j=i+1;j<=i+nums[i];j++){
            if (j<nums.size()){
                visited[j]=1;
            }
            else {
                break;
            }
        }
    }
    return true ;
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