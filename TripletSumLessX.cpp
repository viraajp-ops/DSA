#include<bits/stdc++.h>
using namespace std;
long long int countTriplets(long long arr[], int n, long long sum){
    int count=0;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while (left<right)
        {
            if (arr[i]+arr[left]+arr[right]<sum){
                count+=right-left;
                left++;
            }
            else 
            right--;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    long long int sum;
    cin>>sum;
    cout <<countTriplets(arr,  n,  sum);
    return 0;
}