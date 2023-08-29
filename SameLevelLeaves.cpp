#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * left;
    node * right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int heightBT(node * root){
    if (root==NULL)
    return 0;
    return 1+max(heightBT(root->left),heightBT(root->right));
}
bool iter(node * root ,int k){
    if (root->left==NULL && root->right==NULL && k==1)
    return true;
    if (root->left==NULL && root->right==NULL && k!=1)
    return false;
    if (root->left==NULL && root->right!=NULL)
    return iter(root->right,k-1);
    if (root->left!=NULL && root->right==NULL)
    return iter(root->left,k-1);
    else 
    return iter(root->left,k-1) && iter(root->right,k-1);
}
bool check(node * root){
    int height=heightBT(root);
    if (iter(root,height))
    return true;
    else 
    return false;
};
int main(){
    node * root = new node(1);
    root->left=new node(2);
    root->right=new node(3);
   
    if (check(root)){
        cout<<1;
    }
    else 
    cout<<0;
    return 0;
}