#include<bits/stdc++.h>
using namespace std;
int digits(int a){
    int ans =0;
    while (a>0){
        ans++;
        a=a/10;
    }
    return ans;
}
int generateNext(int start, int len){
    int ans =start;
    for(int i=1;i<len;i++){
        ans=ans *10+start+1;
        start++;
    }
    return ans;
}
vector<int>sequentialDigits(int low ,int high){
    vector<int>ans ;
    int lowD=digits(low);
    int highD=digits(high);
    while (lowD<=highD){
        int start =1;
        while (start + lowD<=10){
            int a=generateNext(start,lowD);
            if (a>=low && a<=high){
                ans.push_back(a);
            }
            start++;
        }
        lowD++;
    }
    return ans;
}
int main(){
    int low ,high;
    cin>>low >> high;
    vector <int> ans=sequentialDigits(low , high);
    for (int i=0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }
    return 0;
}