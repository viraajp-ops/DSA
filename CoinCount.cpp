#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int > coins,int amount){
    if(amount<1)
    return 0;
    vector<int>memory;
    memory.assign(amount+1,INT_MAX);
    memory[0]=0;
    for(int i=1;i<=amount;i++){
        for(auto coin:coins){
            if(coin<=i && memory[i-coin]!=INT_MAX){
                memory[i]=min(memory[i],1+memory[i-coin]);
            }
        }
    }
    if(memory[amount]==INT_MAX)
    return -1;
    else 
    return memory[amount];
}
int main(){
    int n;
    cin>>n;
    vector<int>coins;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        coins.push_back(b);
    }
    int amount;
    cin>>amount;
    cout<< coinChange(coins,amount);
    return 0;
}