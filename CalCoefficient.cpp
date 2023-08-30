#include<bits/stdc++.h>
using namespace std;
int permute(int n,int k){
    long long int m=1e9+7;
    long long int ans=1;
    for(int i=(n-k+1);i<=n;i++){
        ans=(ans*i)%m;
    }
    return ans%m;
}
int main(){
    int n;
    int k;
    cin>>n>>k;
    cout<<permute(n,k);
    return 0;
}