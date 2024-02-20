#include<bits/stdc++.h>
using namespace std ;
vector<char>getLongestSubsequence(vector<char>&words,vector<int>&groups){
    vector<char>ones;
    vector<char>zeros;
    int latest=0;
    for (int i=0;i<words.size();i++){
        if (groups[i]==latest){
            zeros.push_back(words[i]);
            if (latest==1)
            latest=0;
            else 
            latest=1;
        }
    }
    latest=1;
    for (int i=0;i<words.size();i++){
        if (groups[i]==latest){
            ones.push_back(words[i]);
            if (latest==1)
            latest=0;
            else 
            latest=1;
        }
    }
    if (zeros.size()>ones.size())
    return zeros;
    return ones;
}
int main(){
    int n;
    cin>>n;
    vector<char>words ;
    vector<int> groups;
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        words.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        groups.push_back(a);
    }
    vector<char>ans=getLongestSubsequence(words,groups);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}