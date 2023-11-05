#include<bits/stdc++.h>
using namespace std;
class NumArray{
    public:
    vector<int>nums;
    NumArray(vector<int>test){
        nums.push_back(test[0]);
        for(int i=1;i<test.size();i++){
            nums.push_back(nums[i-1]+test[i]);
        }
    }
    int sumRange(int left,int right){
        if (left==0)
        return nums[right];
        else 
        return nums[right]-nums[left-1];
    }
};
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
    NumArray * final = new NumArray(nums);
    cout<<final->sumRange(0,2)<<" ";
    cout<<final->sumRange(2,5)<<" ";
    cout<<final->sumRange(0,5)<<" ";
    return 0;
}