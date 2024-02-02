#include<bits/stdc++.h>
using namespace std;
int longSubarrWthSumDivByK(vector<int>arr,int n,int k){
    int mx=0;
    int sum=0;
    map<int,int>mapping;
    for (int i=0;i<n;i++){
        sum+=arr[i];
        int rem=sum%k;
        if (rem==0){
            mx=max(mx,i+1);
        }
        if (rem<0){
            rem+=k;
        }
        if (mapping.find(rem)==mapping.end()){
            mapping[rem]=i;
        }
        else {
            //Since we are storing the last ones , and the elements after it will be counted , not the present one 
            int len=i-mapping[rem];
            mx=max(mx,len);
        }
    }
    return mx;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<longSubarrWthSumDivByK(arr,n,k);
    return 0;
}