#include<bits/stdc++.h>
using namespace std;
vector<int> commonElements(int a[],int b[],int c[],int n1,int n2,int n3){
    vector<int >ans;
    int ptr1=0,ptr2=0,ptr3=0;
    while (ptr1<n1 && ptr2<n2 && ptr3<n3)
    {
        if (a[ptr1]==b[ptr2] && b[ptr2]==c[ptr3]){
            if (!ans.empty() && ans[ans.size()-1]!=a[ptr1])
            ans.push_back(a[ptr1]);
            if (ans.empty())
            ans.push_back(a[ptr1]);
            ptr1++;
            ptr2++;
            ptr3++;
        }
        else {
            int mini=min(min(a[ptr1],b[ptr2]),c[ptr3]);
            if (a[ptr1]==mini)
            {
                ptr1++;
            }
            else if (b[ptr2]==mini){
                ptr2++;
            }
            else if (c[ptr3]==mini)
            ptr3++;
        }
    }
    return ans;
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    for(int i=0;i<n3;i++){
        cin>>c[i];
    }
    vector<int>ans=commonElements(a,b,c,n1,n2,n3);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}