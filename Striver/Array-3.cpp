#include<bits/stdc++.h>
using namespace std;
vector<int>nextPermutation(vector<int>nums){
    int lowest=-1;
    for (int i=0;i<nums.size()-1;i++){
        if (nums[i]<nums[i+1]){
            lowest=i;
        }
    }
    if (lowest==-1){
        sort(nums.begin(),nums.end());
        return nums;
    }
    else{
        int swapping = 0;
        int val=INT_MAX;
        for (int i=lowest+1;i<nums.size();i++){
            if (nums[i]>nums[lowest]){
                if (nums[i]<val){
                    val=nums[i];
                    swapping=i;
                }
            }
        }
        int temp=nums[lowest];
        nums[lowest]=nums[swapping];
        nums[swapping]=temp;
        sort(nums.begin()+lowest+1,nums.end());
        return nums;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    nums=nextPermutation(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}