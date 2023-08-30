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
void print(node * root){
    node * temp = root;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node * segregate(node * root){
    node * iter=root;
    int count0=0,count1=0,count2=0;
    while (iter!=NULL)
    {
        if (iter->data==0)
        count0++;
        else if (iter->data==1)
        count1++;
        else if (iter->data==2) 
        count2++;
        iter=iter->next;
    }
    node * temp=root;
    while (temp!=NULL)
    {
        while (count0>0 && temp!=NULL)
        {
            temp->data=0;
            count0--;
            temp=temp->next;
        }
        while (count1>0 && temp!=NULL)
        {
            temp->data=1;
            count1--;
            temp=temp->next;
        }
        while (count2>0 && temp!=NULL)
        {
            temp->data=2;
            count2--;
            temp=temp->next;
        }
    }
    
    return root;
}
int main(){
    node * root=new node(1);
    root->next=new node(2);
    root->next->next=new node(2);
    root->next->next->next=new node(1);
    root->next->next->next->next=new node(2);
    root->next->next->next->next->next=new node(0);
    root->next->next->next->next->next->next=new node(2);
    root->next->next->next->next->next->next->next=new node(2);
    print(segregate(root));
    return 0;
}