#include<bits/stdc++.h>
using namespace std;
class node{
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
int isBalanced(node * root,int * height){
    if (root==NULL)
    return true;
    int lh=0;
    int rh=0;
    if (isBalanced(root->left,&lh)==false)
    return false;
    if (isBalanced(root->right,&rh)==false)
    return false;
    *height=1+max(lh,rh);
    if (abs(lh-rh)<=1){
        return true;
    }
    else
    return false;

}
int main(){
    node * root=new node(1);
    root->left=new node(10);
    int height=0;
    if (isBalanced(root,&height))
    cout<<"yes";
    else
    cout<<"No";
    return 0;
}