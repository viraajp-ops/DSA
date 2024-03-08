#include<bits/stdc++.h>
using namespace std; 
bool comp(string a, string b){
    return (a+b)>(b+a);
};
string printLargest(int n, vector<string> &arr) {
    string ans ="";
    sort(arr.begin(),arr.end(),comp);
    for (int i=0;i<n;i++){
        ans +=arr[i];
    }
    return ans ;
}
int main(){
    int n;
    cin>>n;
    vector<string> arr;
    for (int i=0;i<n;i++){
        string a;
        cin>>a;
        arr.push_back(a);
    }
    cout <<printLargest(n,arr);
    return 0;
}