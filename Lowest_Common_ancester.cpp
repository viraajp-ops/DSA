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
node * lowestCommonAncestor(node * root , int n1,int n2){
    if (root==NULL)
    return NULL;
    if (root->data ==n1 || root->data == n2)
    return root ;
    node * leftLCA=lowestCommonAncestor(root->left,n1,n2);
    node * rightLCA=lowestCommonAncestor(root->right, n1,n2);
    if (leftLCA ==NULL && rightLCA!=NULL)
    return rightLCA;
    if (leftLCA !=NULL && rightLCA==NULL)
    return leftLCA;
    if (leftLCA && rightLCA)
    return root ;
    

}
int main(){
    node * root = new node(11);
    root->left=new node(22);
    root->left->left=new node (44);
    root->left->right=new node (55);
    root->right= new node (33);
    root->right->left=new node (66);
    root->right->right=new node (77);
    cout<<lowestCommonAncestor(root , 55 ,77)->data;
    return 0;
}