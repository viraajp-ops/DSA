#include<bits/stdc++.h>
using namespace std;
long long largestPerimeter(vector<int>nums){
    long long sum =0;
    long long ans =-1;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if (i<2){
            sum+=nums[i];
        }
        else {
            if(sum>nums[i]){
                sum+=nums[i];
                ans=max(ans,sum);
            }
            else {
                sum+=nums[i];
            }
        }
    }
    return ans ;
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
    cout<<largestPerimeter(nums);
    return 0;
}