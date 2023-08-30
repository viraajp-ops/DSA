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
    while (root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
}
node * removeNth(node * root ,int n){
    node * temp = root;
    int len=0;
    while (temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    node * iter=root;
    int count=0;
    if (len==n && n==1)
    return NULL;
    if (len==n)
    return root->next;
    while (count<(len-n)-1)
    {
        iter=iter->next;
        count++;
    }
    iter->next=iter->next->next;
    return root;
}
int main(){
    node * head = new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    int n;
    cin>>n;
    removeNth(head,n);
    print(head);
    return 0;
}