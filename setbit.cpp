#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    if (n&(1<<k))
    cout<<"True";
    else 
    cout<<"False";
    return 0;
}