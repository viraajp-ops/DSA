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
int len(node * root){
    int ans=0;
    node * temp=root;
    while (temp!=NULL)
    {
        ans++;
        temp=temp->next;
    }
    return ans;
}
int intersect(node * head1,node * head2){
    int len1=len(head1);
    int len2=len(head2);
    if (len1==0 || len2==0)
    return -1;
    int maxi=max(len1,len2);
    if (maxi==len1){
        for(int i=0;i<(len1-len2);i++){
            head1=head1->next;
        }
        while (head1!=NULL && head2!=NULL && head1!=head2)
        {
            head1=head1->next;
            head2=head2->next;
        }
        if (head1!=NULL)
        return head1->data;
        else
        return -1;
    }
    if (maxi==len2){
        for(int i=0;i<(len2-len1);i++){
            head2=head2->next;
        }
        while (head1!=NULL && head2!=NULL && head1!=head2)
        {
            head1=head1->next;
            head2=head2->next;
        }
        if (head1!=NULL)
        return head1->data;
        else
        return -1;
    }
}
int main(){
    node * list1=new node(3);
    list1->next=new node(6);
    list1->next->next=new node(9);
    list1->next->next->next=new node(15);
    list1->next->next->next->next=new node(30);
    node * list2=new node(10);
    list2->next=list1->next->next->next;
    cout<<intersect(list1,list2);
    return 0;
}