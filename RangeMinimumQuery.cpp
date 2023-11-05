#include<bits/stdc++.h>
using namespace std;
class minimumRange{
    public:
    vector<int>test;
    minimumRange(vector<int>nums){
        test=nums;
    }
    int findMin(int left,int right){
        if (left==right)
        return test[left];
        int mid=(left+right)/2;
        return min(findMin(left,mid),findMin(mid+1,right));
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        arr.push_back(b);
    }
    minimumRange * final = new minimumRange(arr);
    cout<<final->findMin(0,2);
    cout<<final->findMin(2,5);
    cout<<final->findMin(0,5);
    return 0;

}