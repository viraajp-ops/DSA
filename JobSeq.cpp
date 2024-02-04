#include<bits/stdc++.h>
using namespace std;
class Job{
    public:
    int id;
    int dead;
    int profit;
    Job(int idn, int deadline , int pr){
        id=idn;
        dead=deadline;
        profit=pr;
    }
};
bool comp(Job a, Job b){
    if (a.profit==b.profit)
    return a.dead<b.dead;
    return a.profit>b.profit;
}
vector<int>JobScheduling(vector<Job>arr, int n){
    sort (arr.begin(),arr.end(),comp);
    vector<int> result(n,-1);
    int sum=0;
    int count =0;
    for (int i=0;i<n;i++){
        for (int j=min(n,arr[i].dead)-1;j>=0;j--){
            if (result[j]==-1){
                result[j]=i;
                break;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (result[i]!=-1){
            count++;
            sum+=arr[result[i]].profit;
        }
    }
    return {count,sum};
}
int main(){
    int n;
    cin>>n;
    vector<Job>arr;
    for (int i=0;i<n;i++){
        int id;
        int dead;
        int profit;
        cin>>id >>dead>>profit;
        Job J(id , dead,profit);
        arr.push_back(J);
    }
    vector<int>ans=JobScheduling(arr,n);
    for (int i=0;i<2;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}