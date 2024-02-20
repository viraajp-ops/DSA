#include<bits/stdc++.h>
using namespace std ;
int recursiveSol(int n){
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    return recursiveSol(n-1)+recursiveSol(n-2);
}
int dpSol(int n){
    vector<int>dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int betterSol(int n){
    int a=0;
    int b=1;
    if (n==0)
    return a;
    if (n==1)
    return b;
    for(int i=2;i<=n;i++){
        int temp = a;
        a=b;
        b=temp+b;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<betterSol(n);
    return 0;
}