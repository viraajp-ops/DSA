#include<bits/stdc++.h>
using namespace std ;
int computing (int mask , vector<vector<int>>&cost,int pos,vector<vector<int>>&dp){
    if (dp[mask][pos]!=-1)
    return dp[mask][pos];
    if (mask==((1<<cost.size())-1)){
        return dp[mask][pos]=cost[pos][0];
    }
    int ans =INT_MAX;
    for (int i=0;i<cost.size();i++){
        if ((mask & (1<<i))==0){
            int newAns= cost[pos][i]+computing((mask|(1<<i)), cost , i,dp);
            ans=min(ans,newAns);
        }
    }
    return dp[mask][pos]=ans ;
}
int total_cost(vector<vector<int>>&cost){
    vector<vector<int>>dp(pow(2,cost.size()),vector<int>(cost.size(),-1));
    return computing(1,cost,0,dp);
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>cost;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        cost.push_back(temp);
    }
    cout<<total_cost(cost);
    return 0;
}