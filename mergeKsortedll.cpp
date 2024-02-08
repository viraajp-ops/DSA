#include<bits/stdc++.h>
using namespace std ;
class node {
    public:
    int data;
    node * next = NULL;
    node (int val){
        data=val;
        next=NULL;
    }
};
node * mergeKLists(vector<node *>lists){
    map<int,int>mapping;
    for (int i=0;i<lists.size();i++){
        node * root =lists[i];
        while (root!=NULL){
            mapping[root->data]++;
            root= root->next;
        }
    }
    if (mapping.size()==0){
        return NULL;
    }
    else {
        node * root = new node(-1);
        node *temp=root;
        for (auto it:mapping){
            for (int i=1;i<=it.second;i++){
                temp->next=new node (it.first);
                temp=temp->next;
            }
        }
        return root->next;
    }
}
int main(){
    vector<node * >lists;
    node * root1= new node (1);
    root1->next=new node(4);
    root1->next->next=new node (5);
    node * root2=new node (1);
    root2->next=new node (3);
    root2->next->next=new node (4);
    node *root3=new node (2);
    root3->next=new node (6);
    lists.push_back(root1);
    lists.push_back(root2);
    lists.push_back(root3);
    node * ans=mergeKLists(lists);
    while (ans!=NULL)
    {
        cout<<ans->data<<" ";
        ans=ans->next;
    }
    return 0;
}