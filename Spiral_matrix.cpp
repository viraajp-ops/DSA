#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int start=0;
    int end=n-1;
    int first=0;
    int last=m-1;
    vector<int>ans;

    while (start<=end && first<=last)   
    {
        if (start<=end && first<=last){
        for(int i=start;i<=end;i++){
            ans.push_back(arr[first][i]);
        }
        first ++;
        }
        if (start<=end && first<=last){
        for(int i=first;i<=last;i++){
            ans.push_back(arr[i][end]);
        }
        end--;
        }
        if (start<=end && first<=last){
        for(int i=end;i>=start;i--){
            ans.push_back(arr[last][i]);
        }
        last--;
        }
        if (start<=end && first<=last){
        for(int i=last;i>=first;i--){
            ans.push_back(arr[i][start]);
        }
        start++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}