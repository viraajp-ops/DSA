#include<bits/stdc++.h>
using namespace std;
class NumArray{
    public:
    vector<int>a;
    vector<int>tree;
    int n;
    NumArray(vector<int>nums){
        a=nums;
        n=nums.size();
        tree.resize(4*n);
        build(0,n-1,1);
    }
    void build(int first,int last,int node){
        if (first==last){
            tree[node]=a[first];
            return;
        }
        int mid=(first+last)/2;
        build(first,mid,2*node);
        build(mid+1,last,2*node+1);
        tree[node]=tree[node*2+1]+tree[node*2];
    }
    int sumRange(int left,int right){
        return sumRangeFunction(left,right,0,n-1,1);
    }
    int sumRangeFunction(int query_left,int query_right,int node_left,int node_right,int node){
        if (query_left<=node_left && query_right>=node_right)
        return tree[node];
        if (query_left>node_right || query_right<node_left)
        return 0;
        int mid=(node_left+node_right)/2;
        return sumRangeFunction(query_left,query_right,node_left,mid,2*node)+sumRangeFunction(query_left,query_right,mid+1,node_right,2*node+1);
    }
    void update (int index , int val){
        updateFunction(index,val,0,n-1,1);
    }
    void updateFunction(int index,int val,int first,int last,int node){
        if (first==last){
        tree[node]=val;
        return ;
        }
        int mid=(first+last)/2;
        if (index<=mid)
        updateFunction(index,val,first,mid,2*node);
        else
        updateFunction(index,val,mid+1,last,2*node+1);
        tree[node]=tree[2*node]+tree[2*node+1];
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        nums.push_back(b);
    }
    NumArray * final= new NumArray(nums);
    cout<<final->sumRange(0,2);
    final->update(1,2);
    cout<<final->sumRange(0,2);
    return 0;
}