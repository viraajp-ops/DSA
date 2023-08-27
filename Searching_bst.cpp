#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *left ;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void search_in_bst(node * root,int target){
    if (root==NULL)
    cout<<"null";
    else if (root->data==target)
    cout<<"found";
    else if (root->data>target)
    return search_in_bst(root->left,target);
    else 
    return search_in_bst(root->right,target);
}
int main(){
    int number;
    cin>>number;
    node * root = new node(4);
    root->left=new node(2);
    root->right=new node(7);
    root->left->left=new node(1);
    root->left->right=new node(3);
    search_in_bst(root,number);
    return 0;
}