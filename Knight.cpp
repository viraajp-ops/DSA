#include<bits/stdc++.h>
using namespace std;
int minStepToReachTarget(vector<int>KnightPos,vector<int>TargetPos,int n){
    int ans =0;
    queue<vector<int>>seq;
    seq.push(KnightPos);
    vector<vector<bool>>visited (n+1,vector<bool>(n+1,false));
    visited[KnightPos[0]][KnightPos[1]]=true;
    while (seq.size()>0){
        int len=seq.size();
        for (int i=0;i<len;i++){
            vector<int>test =seq.front();
            if (test[0]==TargetPos[0] && test[1]==TargetPos[1]){
                return ans;
            }
            else {
                if (test[0]+1<=n && test[1]+2<=n && !visited[test[0]+1][test[1]+2]){
                    vector<int>temp;
                    temp.push_back(test[0]+1);
                    temp.push_back(test[1]+2);
                    seq.push(temp);
                    visited[test[0]+1][test[1]+2]=true;
                }
                if (test[0]+1<=n && test[1]-2>=1 && !visited[test[0]+1][test[1]-2]){
                    vector<int>temp;
                    temp.push_back(test[0]+1);
                    temp.push_back(test[1]-2);
                    seq.push(temp);
                    visited[test[0]+1][test[1]-2]=true ;
                }
                if (test[0]-1>=1 && test[1]+2<=n && !visited[test[0]-1][test[1]+2]){
                    vector<int>temp;
                    temp.push_back(test[0]-1);
                    temp.push_back(test[1]+2);
                    seq.push(temp);
                    visited[test[0]-1][test[1]+2]=true;
                }
                if (test[0]-1>=1 && test[1]-2>=1 && !visited[test[0]-1][test[1]-2]){
                    vector<int>temp;
                    temp.push_back(test[0]-1);
                    temp.push_back(test[1]-2);
                    seq.push(temp);
                    visited[test[0]-1][test[1]-2]=true;
                }
                if (test[0]+2<=n && test[1]+1<=n && !visited[test[0]+2][test[1]+1]){
                    vector<int>temp;
                    temp.push_back(test[0]+2);
                    temp.push_back(test[1]+1);
                    seq.push(temp);
                    visited[test[0]+2][test[1]+1]=true ;
                }
                if (test[0]-2>=1 && test[1]+1<=n  && !visited[test[0]-2][test[1]+1]){
                    vector<int>temp;
                    temp.push_back(test[0]-2);
                    temp.push_back(test[1]+1);
                    seq.push(temp);
                    visited[test[0]-2][test[1]+1]=true ;
                }
                if (test[0]-2>=1 && test[1]-1>=1  && !visited[test[0]-2][test[1]-1]){
                    vector<int>temp;
                    temp.push_back(test[0]-2);
                    temp.push_back(test[1]-1);
                    seq.push(temp);
                    visited[test[0]-2][test[1]-1]=true ;
                }
                if (test[0]+2<=n && test[1]-1>=1  && !visited[test[0]+2][test[1]-1]){
                    vector<int>temp;
                    temp.push_back(test[0]+2);
                    temp.push_back(test[1]-1);
                    seq.push(temp);
                    visited[test[0]+2][test[1]-1]=true;
                }
                seq.pop();
            }
        }
        ans++;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>KnightPos;
    vector<int>TargetPos;
    //First Knight Pos
    for (int i=0;i<2;i++){
        int a;
        cin>>a;
        KnightPos.push_back(a);
    }
    for (int i=0;i<2;i++){
        int a;
        cin>>a;
        TargetPos.push_back(a);
    }
    cout<<minStepToReachTarget(KnightPos,TargetPos,n);
    return 0;
}