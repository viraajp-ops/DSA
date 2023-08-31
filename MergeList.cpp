#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void print(node * root){
    node * temp=root;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node * merge(node * list1,node * list2){
    node * head = new node (5);
    node * iter=head;
    node * temp1=list1;
    node * temp2=list2;
    while (temp1!=NULL && temp2 !=NULL)
    {
        if (temp1->data==temp2->data){
            iter->next=temp1;
            temp1=temp1->next;
            iter=iter->next;
            iter->next=temp2;
            temp2=temp2->next;
            iter=iter->next;
        }
        else if (temp1->data<temp2->data){
            iter->next=temp1;
            iter=iter->next;
            temp1=temp1->next;
        }
        else {
            iter->next=temp2;
            iter=iter->next;
            temp2=temp2->next;
        }
    }
    while (temp1!=NULL)
    {
        iter->next=temp1;
        iter=iter->next;
        temp1=temp1->next;
    }
    while (temp2!=NULL)
    {
        iter->next=temp2;
        iter=iter->next;
        temp2=temp2->next;
    }
    return head->next;
}
int main(){
    node * root1=new node(1);
    root1->next=new node(2);
    root1->next->next=new node(4);
    node * root2=new node(1);
    root2->next=new node(3);
    root2->next->next=new node(4);
    print(merge(root1,root2));
    return 0;
}