#include<bits/stdc++.h>
using namespace std;
// will be solved using floyds algorithm
class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
// to handle loop at the first element is missing 
void removeLoop(node * root){
    node * slow = root ;
    node * fast = root ;
    bool cycle=false;
    if (root ==NULL)
    return ;
    while (fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        {
            cycle=true;
            break;
        }
    }
    if (cycle)
    {
        fast=root;
        while (fast->next!=slow->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        if (slow==root){
            node * prev=root;
            while (prev->next!=slow)
            {
                prev=prev->next;
            }
            prev->next=NULL;
        }
        else
        slow->next=NULL;
    }
    else
    return;
    
};
void print(node * root){
    node * temp=root;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null";
}
int main(){
    node * head= new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=head;
    removeLoop(head);
    print(head);
    return 0;
}