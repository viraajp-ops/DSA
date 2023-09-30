#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    int currentM=0;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        if (mp[s[i]]==0){
            mp[s[i]]=i+1;
            currentM++;
            ans=max(ans,currentM);
        }
        else {
            currentM=i+1-mp[s[i]];
            for (auto it=mp.begin();it!=mp.end();it++){
                if (it->second<mp[s[i]]){
                    mp[it->first]=0;
                }
            }
            mp[s[i]]=i+1;
            ans=max(ans,currentM);
        }
    }
    cout<<ans;
    return 0;
}