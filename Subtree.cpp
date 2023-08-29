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
bool isEqual(node * p, node * q){
    if (p==NULL && q==NULL)
    return true;
    if (p==NULL && q!=NULL)
    return false;
    if (p!=NULL && q==NULL)
    return false;
    if (p->data==q->data)
    return isEqual(p->left,q->left) && isEqual(p->right,q->right);
    return false;
}
bool isSubtree(node * root,node * subroot){
    if (root==NULL && subroot==NULL)
    return true;
    if (root==NULL && subroot!=NULL)
    return false;
    if (root!=NULL && subroot==NULL)
    return false;
    if (root->data!=subroot->data)
    return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    if (root->data==subroot->data)
    return isEqual(root,subroot) || isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    return true;
};
int main(){
    node * root=new node(3);
    root->left=new node(4);
    root->left->left=new node(1);
    root->left->right=new node(2);
    root->right=new node(5);
    node * subroot=new node(4);
    subroot->left=new node(1);
    subroot->right=new node(2);
    if (isSubtree(root,subroot))
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}