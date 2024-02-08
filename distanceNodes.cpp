#include<bits/stdc++.h>
using namespace std;
class node{
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
node * lca(node * root , int a , int b){
    if (root ==NULL)
    return NULL;
    if (root->data == a || root->data == b){
        return root;
    }
    node * leftLCA= lca(root->left , a, b);
    node * rightLCA=lca(root->right,a,b);
    if (leftLCA==NULL && rightLCA!=NULL)
    return rightLCA;
    if (leftLCA!=NULL && rightLCA==NULL)
    return leftLCA;
    if (leftLCA && rightLCA)
    return root;
}
int dist(node * root , int val){
    if (root ==NULL)
    return 0;
    if (root->data==val){
        return 1;
    }
    int leftDist=dist(root->left, val);
    int rightDist=dist(root->right,val);
    if (leftDist>0)
    return 1+leftDist;
    else if (rightDist>0)
    return 1+rightDist;
    return 0;
}
int findDist(node * root , int a, int b){
    node * lcaNode = lca(root,a,b);
    return dist(lcaNode,a)+dist(lcaNode,b)-2;
}
int main(){
    node * root = new node(11);
    root->left=new node(22);
    root->left->left=new node (44);
    root->left->right=new node (55);
    root->right= new node (33);
    root->right->left=new node (66);
    root->right->right=new node (77);
    cout<<findDist(root,55,77);
    return 0;
}