#include<bits/stdc++.h>
using namespace std ;
int countVowelStrings(int n){
    int vowels[5]={1,2,3,4,5};
    for (int i=1;i<n;i++){
        for (int j=1;j<5;j++){
            vowels[j]+=vowels[j-1];
        }
    }
    return vowels[4];
}
int main(){
    int n;
    cin>>n;
    cout<<countVowelStrings(n);
    return 0;
}