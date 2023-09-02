#include<bits/stdc++.h>
using namespace std;
class st{
    st(){

    }
    vector<int>arr;
    int top=-1;
    void push(int x){
        top++;
        arr.push_back(x);
    }
    int pop(){
        int a=arr[top];
        arr.pop_back();
        top--;
        return a;
    }
    bool empty(){
        if (top==-1)
        return true;
        else 
        return false;
    }
    int top_(){
        return arr[top];
    }
    int findMiddle(){
        int n=arr.size();
        if (n%2==0){
            return 0;
        }
        else 
        return arr[n/2];
    }
    void deleteMiddle(){
        int n=arr.size();
        if (n%2==0)
        return;
        else {
            for(int i=n/2;i<n-1;i++){
                arr[i]==arr[i+1];
            }
            top--;
            arr.pop_back();
            return;
        }
    }
};
int main(){
    
}