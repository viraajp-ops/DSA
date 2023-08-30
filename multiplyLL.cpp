#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
long long int multiply(node * l1,node * l2){
    int a=0,b=0;
    node * temp1=l1;
    node * temp2=l2;
    while (temp1!=NULL)
    {
        a=a*10+temp1->data;
        temp1=temp1->next;
    }
    while (temp2!=NULL)
    {
        b=b*10+temp2->data;
        temp2=temp2->next;
    }
    return a*b;
};
int main(){
    node * list1=new node(3);
    list1->next=new node(2);
    node * list2=new node(2);
    cout<<multiply(list1,list2);
    return 0;
}