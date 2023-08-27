#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * left ;
    node * right;
    node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void minimum(node * root){
    if (root ==NULL)
    cout<<-1;
    if (root ->left!=NULL)
    minimum (root ->left);
    else 
    cout<<root->data;
};
int main(){
    node * root = new node (5);
    root->left=new node (4);
    root -> left->left=new node (3);
    root ->left->left->left= new node (1);
    root ->right=new node (6);
    root->right->right=new node (7);
    minimum(root);
    return 0;
}