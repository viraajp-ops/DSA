#include<bits/stdc++.h>
using namespace std;
long long int countBT(int h){
    long long int arr[h+1];
    long long int m=1e9+7;
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=h;i++){
        arr[i]=(arr[i-1]*arr[i-1])%m+(arr[i-2]*arr[i-1])%m+(arr[i-1]*arr[i-2])%m;
    }
    return arr[h]%m;
}
int main(){
    int h;
    cin>>h;
    cout<<countBT(h);
    return 0;
}