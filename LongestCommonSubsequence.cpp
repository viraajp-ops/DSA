#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>matrix;
int computing(string text1,string text2,int row,int col){
    if (row>=text1.size())
    return 0;
    if (col>=text2.size())
    return 0;
    if (matrix[row][col]!=-1){
        return matrix[row][col];
    }
    else {
    if (text1[row]==text2[col])
    {
        matrix[row][col]=1+computing(text1,text2,row+1,col+1);
        return matrix[row][col];
    }
    else {
        matrix[row][col]=max(computing(text1,text2,row+1,col),computing(text1,text2,row,col+1));
        return matrix[row][col];
    }
    }
}
int longestCommonSubsequence(string text1, string text2) {
    bool found=false;
    for(int i=0;i<text1.size();i++){
        vector<int>temp;
        for(int j=0;j<text2.size();j++){
            temp.push_back(-1);
            if (text1[i]==text2[j])
            found=true;
        }
        matrix.push_back(temp);
    }
    if (found==false)
    return 0;
    else 
    return computing(text1,text2,0,0);
}
int main(){
    string text1,text2;
    cin>>text1>>text2;
    cout<<longestCommonSubsequence(text1,text2);
    return 0;
}