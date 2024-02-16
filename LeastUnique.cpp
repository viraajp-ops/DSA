#include<bits/stdc++.h>
using namespace std ;
//This one was good solution , but you actually didn't need the second number in the pair 
//Also , instead of using priority queue , I can use an array and then sort it in one step 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    map<int,int>mapping;
    for (int i=0;i<n;i++){
        mapping[arr[i]]++;
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto it:mapping){
        pq.push(it.second);
    }
    while (k>0){
        if (k>=pq.top()){
        k-=pq.top();
        pq.pop();
        }
        else {
            k-=pq.top();
        }
    }
    cout<<pq.size();

}