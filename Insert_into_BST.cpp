#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right ;
    node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void print(node * root){
    if (root==NULL)
    return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void insert_BST(node *root,int target){
    if (root->data>target){
        if (root->left==NULL){
            node * temp = new node (target);
            root->left=temp;
            return;
        }
        else 
        return insert_BST(root->left,target);
    }
    else if (root->data<target){
        if (root->right==NULL)
        {
            node * temp = new node (target);
            root->right=temp;
            return;
        }
        else 
        return insert_BST(root->right,target);
    }
    if (root->data==target)
    return;
};
int main(){
    int target ;
    cin>>target;
    node * root=new node(2);
    root->left=new node(1);
    root->right=new node(3);
    root->right->right=new node(6);
    insert_BST(root,target);
    print(root);
    return 0;
}