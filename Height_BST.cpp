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
int height(node * root){
    if (root==NULL)
    return 0;
    return 1 + max(height(root->left),height(root->right));
};
int main(){
    node * root=new node(2);
    root->right=new node(1);
    root->right->left=new node(3);
    cout<<height(root);
    return 0;
}