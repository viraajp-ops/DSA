#include<bits/stdc++.h>
using namespace std;
int calculating(int n,int m,int A[],int B[]){
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    // the above command helps to initialise the dp with 0
    for(int i=1;i<=m;i++){
        for(int j=i;j<=n;j++){
            dp[i][j]=max(dp[i-1][j-1]+A[j-1]*B[i-1],dp[i][j-1]);
        }
    }
    return dp[m][n];
}
int main(){
    int n,m;
    cin>>n>>m;
    int A[n],B[m];
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<m;i++)
    cin>>B[i];
    cout<<calculating(n,m,A,B);
    return 0;
}