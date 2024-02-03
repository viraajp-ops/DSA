#include<bits/stdc++.h>
using namespace std;
int countBitsFlip(int a,int b){
    int ans =0;
    // It is an OR condition here
    while (a>0 || b>0){
        if (a%2!=b%2)
        ans++;
        a/=2;
        b/=2;
    }
    return ans ;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<countBitsFlip(a,b);
    return 0;
}