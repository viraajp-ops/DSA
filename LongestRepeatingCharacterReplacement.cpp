#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s,int k){
    int start=0;
    int end=0;
    int maxlenght=0;
    int maxfreq=0;
    map<char,int>mapping;
    while (end<s.size() && start<=end)
    {
        mapping[s[end]]++;
        maxfreq=max(maxfreq,mapping[s[end]]);
        int length_present=end-start+1;
        if (length_present-maxfreq<=k){
            maxlenght=length_present;
            end++;
        }
        else{
            mapping[s[start]]--;
            maxfreq=0;
            for(auto it:mapping){
                maxfreq=max(maxfreq,mapping[it.first]);
            }
            end++;
            start++;
        }
    }
    
    return maxlenght;
};
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<characterReplacement(s,k);
    return 0;
}