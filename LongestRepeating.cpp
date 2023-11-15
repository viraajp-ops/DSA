#include<bits/stdc++.h>
using namespace std;
int LongestRepeatingSubsequence(string str){
    int n=str.size();
    int matrix[n+1][n+1];
    for(int i=n-1;i>=0;i--){
        matrix[n][i]=0;
        matrix[i][n]=0;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if (str[i]==str[j] && i!=j){
                matrix[i][j]=1+matrix[i+1][j+1];
            }
            else 
            matrix[i][j]=max(matrix[i+1][j],matrix[i][j+1]);
        }
    }
    return matrix[0][0];
}
int main(){
    string str;
    cin>>str;
    cout<<LongestRepeatingSubsequence(str);
    return 0;
}