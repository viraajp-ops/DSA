#include <bits/stdc++.h>
using namespace std;
int minSwaps(vector<int> &arr)
{
    int ans =0;
    vector<pair<int,int>>nums;
    for (int i=0;i<arr.size();i++){
        nums.push_back(make_pair(arr[i],i));
    }
    sort (nums.begin(),nums.end());
    vector<bool>visited(arr.size(),false);
    for (int i=0;i<arr.size();i++){
        if (visited[i]==false){
            int j=i;
            int c=0;
            while (visited[j]==false)
            {
                visited[j]=true;
                j=nums[j].second;
                c++;
            }
            ans+=c-1;
        }
    }
    return ans ;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout <<minSwaps(nums);
    return 0;
}