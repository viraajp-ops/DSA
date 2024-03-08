#include<bits/stdc++.h>
using namespace std; 
int bagOfTokensScore(vector<int>& tokens, int power){
    int left =0;
    int right = tokens.size()-1;
    int score =0;
    sort(tokens.begin(),tokens.end());
    int maxVal=0;
    while (left<=right){
        if (power>=tokens[left]){
            power-=tokens[left];
            left++;
            score++;
            maxVal=max(maxVal,score);
        }
        else if (score>=1){
            power+=tokens[right];
            score--;
            right--;
        }
        else 
        break;
    }
    return maxVal;
}
int main(){
    int n;
    cin>>n;
    vector<int>tokens;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        tokens.push_back(a);
    }
    int power ;
    cin>>power;
    cout <<bagOfTokensScore(tokens,power);
    return 0;
}