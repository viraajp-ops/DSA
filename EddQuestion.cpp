#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    // in this question , We are trying to reduce the number of step to the number of unsuccessful drops of the first egg.
    // so it comes out to the sum of all natural numbers : (x)(x+1)=2*n;
    cout << ceil((-1+sqrt(8*n+1))/2);
    return 0;
}