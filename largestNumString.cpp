// This is a very good approachhh , this needs to be remembered 
#include<bits/stdc++.h>
using namespace std;
bool static cmp(string a,string b){
    return (a+b)>(b+a);
    // Here you add the condition that you want to sort ass , 
    // like in this example , it will return true if (a+b) is greater than (b+a);
}
int main(){
    vector<string> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        arr.push_back(a);
    }
    sort (arr.begin(),arr.end(),cmp);
    string ans;
    for(int i=0;i<arr.size();i++){
        ans+=arr[i];
    }
    cout<<ans;
    return 0;
}