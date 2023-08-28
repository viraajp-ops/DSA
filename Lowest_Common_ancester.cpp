#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * left ;
    node * right ;
    node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node * lca(node * root, int n1,int n2){
    if (root ==NULL)
    return NULL;
    if (root->data==n1 || root->data ==n2)
    return root;
    node * LeftLCA=lca(root->left,n1,n2);
    node * RightLCA=lca(root->right,n1,n2);
    if (LeftLCA!=NULL && RightLCA==NULL)
    return LeftLCA;
    if (LeftLCA==NULL && RightLCA!=NULL)
    return RightLCA;
    if (LeftLCA && RightLCA)
    return root;
};
int main(){
    node * root=new node(5);
    root ->left=new node(2);
    root->left->left=new node(3);
    root->left->right=new node(4);
    int n1,n2;
    cout<<"Enter the values of n1 and n2";
    cin>>n1>>n2;
    cout<<lca(root,n1,n2)->data;
    return 0;
}