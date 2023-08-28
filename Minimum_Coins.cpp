#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    vector<int>ans;
    cin>>N;
    while (N>0)
    {
        if (N>=2000){
            ans.push_back(2000);
            N=N-2000;
        }
        else if (N>=500){
            ans.push_back(500);
            N=N-500;
        }
        else if (N>=200){
            ans.push_back(200);
            N=N-200;
        }
        else if (N>=100){
            ans.push_back(100);
            N=N-100;
        }
        else if (N>=50){
            ans.push_back(50);
            N=N-50;
        }
        else if (N>=20){
            ans.push_back(20);
            N=N-20;
        }
        else if (N>=10){
            ans.push_back(10);
            N=N-10;
        }
        else if (N>=5){
            ans.push_back(5);
            N=N-5;
        }
        else if (N>=2){
            ans.push_back(2);
            N=N-2;
        }
        else if(N>=1){
            ans.push_back(1);
            N=N-1;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}