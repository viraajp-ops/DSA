#include<bits/stdc++.h>
using namespace std ;
int bits (int n){
    if (n==0)
    return 0;
    int ans =0;
    while (n>0){
        if (n&1)
        ans++;
        n=n>>1;
    }
    return ans ;
}
vector<int>countBits(int n){
    vector<int>ans ;
    for(int i=0;i<=n;i++){
        ans.push_back(bits(i));
    }
    return ans ;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans=countBits(n);
    for(int i=0;i<n+1;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}