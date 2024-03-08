#include <bits/stdc++.h>
using namespace std;
bool isSame(int arr[],int n){
    unordered_map<int,int>mapping;
    for (int i=0;i<n;i++){
        if (arr[i]==0)
        continue;
        else {
            mapping[arr[i]]++;
        }
    }
    if (mapping.size()==1)
    return true ;
    return false;
}
bool sameFreq(string s)
{
    int arr[26]={0};
    for (int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    if (isSame(arr,26))
    return true ;
    for (int i=0;i<26;i++){
        if (arr[i]==0)
        continue;
        arr[i]--;
        if (isSame(arr,26))
        return true ;
        arr[i]++;
    }
    return false ;
}
int main()
{
    string s;
    cin >> s;
    cout<<sameFreq(s);
    return 0;
}