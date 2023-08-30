#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    arr[s[i]-'a']++;
    string ans;
    for(int i=0;i<26;i++){
        for(int j=0;j<arr[i];j++){
            ans+='a'+i;
        }
    }
    cout<<ans;
    return 0;
}