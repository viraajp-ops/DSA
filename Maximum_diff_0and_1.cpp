#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxim=0;
    int ones=0;
    int zeros =0;
    int currentdiff=0;
    for(int i=0;i<s.length();i++){
        if (s[i]=='0'){
            zeros++;
        }
        else 
        ones++;
        currentdiff=zeros-ones;
        if (currentdiff<0){
            currentdiff=0;
            zeros=0;
            ones=0;
        }
        maxim=max(maxim,currentdiff);
    }
    if (maxim==0)
    cout<<-1;
    else
    cout<<maxim;
    return 0;
}