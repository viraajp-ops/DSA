#include<bits/stdc++.h>
using namespace std ;
int minCostClimbingStairs(vector<int>cost){
    if (cost.size()==2){
        if (cost[0]>cost[1])
        return cost[1];
        return cost[0];
    }
    for(int i=2;i<cost.size();i++){
        cost[i]+=min(cost[i-1],cost[i-2]);
    }
    if (cost[cost.size()-1]>cost[cost.size()-2])
    return cost[cost.size()-2];
    return cost[cost.size()-1];
}
int main(){
    int n;
    cin>>n;
    vector<int>costs;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        costs.push_back(a);
    }
    cout<<minCostClimbingStairs(costs);
    return 0;
}