#include<bits/stdc++.h>
using namespace std ;
class node {
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
node * flattenBST(node * root){
    if (root==NULL)
    return NULL;
    node * leftC=flattenBST(root->left);
    root->left=NULL;
    root->right=flattenBST(root->right);
    node * iter=leftC;
    if (iter!=NULL){
    while (iter->right!=NULL)
    {
        iter=iter->right;
    }
    iter->right=root;
    return leftC;
    }
    else return root;
}
void print(node * root){
    if (root==NULL)
    return;
    print(root->left);
    cout<<root->data<<"->";
    print(root->right);
}
int main(){
    node * root = new node(5);
    root->left=new node (3);
    root->left->left=new node(2);
    root->left->right=new node (4);
    root->right=new node(7);
    root->right->left=new node (6);
    root->right->right=new node (8);
    print(flattenBST(root));
    return 0;
}