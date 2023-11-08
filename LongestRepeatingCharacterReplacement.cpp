#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s,int k){
    int start=0;
    int end=0;
    int maxlenght=0;
    int maxfreq=0;
    map<char,int>mapping;
    while (end<s.size() && start<=end){
        mapping[s[end]]++;
        maxfreq=max(maxfreq,mapping[s[end]]);
        if (end-start+1-maxfreq<=k){
            maxlenght=max(maxlenght,end-start+1);
            end++;
        }
        else {
            // At this point their is no need to change the maxfrequency thing
            mapping[s[start]]--;
            start--;
            end++;
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