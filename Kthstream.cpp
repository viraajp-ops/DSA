#include<bits/stdc++.h>
using namespace std;
vector<int> kthLargest(int k, vector<int>arr, int n) {
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if (pq.size()<k){
            ans.push_back(-1);
        }
        else if (pq.size()==k){
            ans.push_back(pq.top());
        }
        else {
            pq.pop();
            ans.push_back(pq.top());
        }
    }
    return ans;
}
int main(){
    int k,n;
    cin>>k>>n;
    vector<int>arr;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    vector<int>ans = kthLargest(k,arr,n);
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}