#include<bits/stdc++.h>
using namespace std;
class q {
    public:
    deque<int>q;
    void push(int x){
        q.push_back(x);
    }
    int pop(){
        int a=q.front();
        q.pop_front();
        return a;
    }
    bool empty(){
        if (q.size()==0)
        return true;
        else 
        return false;
    }
    int top(){
        return q.size();
    }
};
int main(){
    q * qu = new q;
    qu->push(3);
    qu->push(2);
    cout<<qu->pop();
    cout<<qu->empty();
    cout<<qu->top();
    return 0;
}