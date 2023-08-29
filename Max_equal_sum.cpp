#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int> s1,s2,s3;
    for(int i=0;i<n1;i++)
    {
        int a;
        cin>>a;
        s1.push_back(a);
    }
    for(int i=0;i<n2;i++)
    {
        int a;
        cin>>a;
        s2.push_back(a);
    }
    for(int i=0;i<n3;i++)
    {
        int a;
        cin>>a;
        s3.push_back(a);
    }
    int sum1=sum(s1,n1);
    int sum2=sum(s2,n2);
    int sum3=sum(s3,n3);
    int ptr1=0,ptr2=0,ptr3=0;
    while (ptr1<n1 && ptr2<n2 && ptr3<n3)
    {
        if(sum1==sum2 && sum2==sum3)
        break;   
        int mini=min(min(sum1,sum2),sum3);
        if (mini<sum1){
            sum1-=s1[ptr1];
            ptr1++;
        }
        if (mini<sum2){
            sum2-=s2[ptr2];
            ptr2++;
        }
        if (mini<sum3){
            sum3-=s3[ptr3];
            ptr3++;
        }
    }
    if (ptr1==n1 || ptr2==n2||ptr3==n3)
    sum1=0;
    cout<<sum1;
    return 0;
}