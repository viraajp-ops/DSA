#include<bits/stdc++.h>
using namespace std ; 
int countPrimes(int n){
    if (n<=1)
    return 0;
    vector<bool> arr(n,true);
    arr[0]=false ;
    arr[1]=false ;
    for (int i=2;i<=sqrt(n);i++){
        if (arr[i]){
            int start =i;
            while (start*i<n){
                arr [start*i]=false;
                start++;
            }
        }
    }
    int ans =0;
    for (int i=0;i<n;i++){
        if (arr[i]){
            ans++;
        }
    }
    return ans ;
}
int main(){
    int n;
    cin>>n;
    cout<< countPrimes(n);
    return 0;
}