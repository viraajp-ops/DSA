#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>generate(int n){
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<i+1;j++){
            if (j==0)
            temp.push_back(1);
            else if (j==i)
            temp.push_back(1);
            else {
                temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans = generate(n);
    for (int i=0;i<n;i++){
        for (int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}