#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==0)
    cout<<"No";
    else {
    if ((n&n-1)==0)
    cout<<"Yes";
    else 
    cout<<"No";
    }
    return 0;
}