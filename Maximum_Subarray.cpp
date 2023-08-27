#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    cout<<"Enter the elements of the array";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max_Sum=INT_MIN;
    int current_Sum=0;
    for(int i=0;i<n;i++){
        current_Sum+=arr[i];
        if (current_Sum<0)
        current_Sum=0;
        if (current_Sum>max_Sum){
            max_Sum=current_Sum;
        }
    }
    cout<<"The maximum sum is :"<<max_Sum;
    return 0;
}