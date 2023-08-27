#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int count =0;
    while (N!=0)
    {
        if ((N&1)!=0){
            count++;
        }
        N=N>>1;
    }
    cout<<count;
    return 0;
}