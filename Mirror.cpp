#include<bits/stdc++.h>
using namespace std;
class node{
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
void print(node * root){
    if (root==NULL)
    return ;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void mirror(node * root){
    if (root ==NULL)
    return ;
    node * temp=root->left;
    root->left=root->right;
    root->right=temp;
    mirror(root->left);
    mirror(root->right);
}
int main(){
    node * root=new node(1);
    root->left=new node(3);
    root->right=new node(2);
    root->right->left=new node(5);
    root->right->right=new node(4);
    print(root);
    mirror(root);
    cout<<"\n";
    print(root);
    return 0;
}