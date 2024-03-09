#include<bits/stdc++.h>
using namespace std ;
int sparseVector(vector<int>nums1,vector<int>nums2){
    int ans=0;
    //assuming the size of both arrays is same
    for (int i=0;i<nums1.size();i++){
        ans +=nums1[i]*nums2[i];
    }
    return ans ;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums1;
    vector<int>nums2;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        nums1.push_back(a);
    }
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        nums2.push_back(a);
    }
    cout<<sparseVector(nums1,nums2);
    return 0;
}