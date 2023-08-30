#include<bits/stdc++.h>
using namespace std;
class St{
    public:
    deque<int>d;
    void push(int x){
        d.push_back(x);
    }
    int pop(){
        int a=d[d.size()-1];
        d.pop_back();
        return a;
    }
    bool empty(){
        if (d.size()==0)
        return true;
        else 
        return false;
    }
    int top(){
        return d.size();
    }
};
int main(){
    St * st=new St();
    st->push(5);
    st->push(6);
    cout<<st->pop();
    cout<<st->top();
    cout<<st->empty();
    return 0;
}