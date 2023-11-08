// This question uses Manachers algorithm 
#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s){
    // Preprocessing stage :
    char t[2*s.size()+1];
    int index=0;
    for(int i=0;i<2*s.size()+1;i++){
        if (i%2==0)
        t[i]='$';
        else 
        t[i]=s[index++];
    }
    vector<int>p;
    p.assign(2*s.size()+1,1); // Assigning the minimum value 1 at each location of p
    int l=1,r=1;
    // Starting from 1 since on 0th index we know their is no way possible for it to be same 
    for(int i=1;i<2*s.size()+1;i++){
        p[i]=max(0,min(r-i,p[l+r-i]));
        while (i+p[i]<2*s.size()+1 && i-p[i]>=0 && s[i+p[i]]==s[i-p[i]])
        {
            p[i]++;
        }
        if (i+p[i]>r){
            l=i+p[i];
            r=i+p[i] ;       
        }
    }
}
int main(){
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
    return 0;
}