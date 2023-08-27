#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of columns";
    cin>>n;
    int matrix[m][n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int row=0;
    int column= n-1;
    bool found=false;
    int target;
    cout<<"Enter the target element";
    cin>>target;
    while (row<n && column>=0)
    {
        if (matrix[row][column]==target)
        {
            found=true;
            break;
        }
        else if (matrix[row][column]>target){
            column--;
        }
        else
        row++;
    }
    if (found)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}