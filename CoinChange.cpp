//In any kind of Dynamic programming problem , you need to search for 2 properties :
//1. Overlapping subproblem property. -> this means that any particular case is getting repeated 
//2. Optimal substructure property. -> If an optimal solution can be constructed from optimal solutions of its subproblems.
// Their are also two ways to solve any DP related problem : 1. Memorization(Check if any value is already computed or not, then only compute the result ) 2. Tabulation (bottom up)
// Mostly number of columns hamare answer ke hote hai , aur rows mai condition vaale hote hai
#include<bits/stdc++.h>
using namespace std;
int ans(int n,int k,int arr[]){
    int sol[n+1];
    if (n==0)
    return 0;
    sol[0]=1;
    for(int i=1;i<=n;i++)
    {
        sol[i]=0;
    }
    for(int j=0;j<k;j++){
        for(int i=arr[j];i<=n;i++){
            sol[i]+=sol[i-arr[j]];
        }
    }
    return sol[n];
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    cout<<ans(n,k,arr);
    return 0;
}