#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int k;
    cin>>k;
    sort(a,a+n);
    sort(b,b+n);
    bool possible=true;
    for(int i=0;i<n;i++){
        if (a[i]+b[n-i-1]>=k){}
        else {
            possible=false;
            break;
        }
    }
    if (possible)
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}