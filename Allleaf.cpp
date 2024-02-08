#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int height (node * root){
    if (root ==NULL)
    return 0;
    return 1+max(height(root->left),height(root->right));
}
bool leavesVerify(node * root , int k){
    if (root->left==NULL && root->right==NULL && k==1)
    return true ;
    if (root->left==NULL && root->right==NULL && k!=1)
    return false;
    if (root->left==NULL && root->right!=NULL)
    return leavesVerify(root->right,k-1);
    if (root->left!=NULL && root->right==NULL)
    return leavesVerify(root->left,k-1);
    return leavesVerify(root->left,k-1)&& leavesVerify(root->right,k-1);
}
bool check(node * root){
    if (root==NULL)
    return true ;
    int k=height(root);
    if (leavesVerify(root , k))
    return true ;
    else 
    return false;
}
int main(){
    node * root = new node (10);
    root->left=new node(20);
    root->left->left=new node (10);
    root->left->right=new node (15);
    root->right=new node (30);
    cout<<check(root);
    return 0;
}