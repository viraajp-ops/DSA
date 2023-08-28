#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left ;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int actual(node * root){
    if (root==NULL)
    return 0;
    int prev=root->data;
    root->data=actual(root->left)+actual(root->right);
    return prev+ root->data;
}
void toSumTree(node * root){
    actual(root);
}
void inorder(node * root){
    if (root ==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node * root = new node(10);
    root->left=new node(-2);
    root->left->left=new node(8);
    root->left->right=new node(-4);
    root->right=new node(6);
    root->right->left=new node(7);
    root->right->right=new node(5);
    toSumTree(root);
    inorder(root);
    return 0;
}