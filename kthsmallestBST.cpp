#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left ;
    node * right;
    node ( int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
vector<int>ans;
void inorder(node * root,int k){
    if (root==NULL)
    return;
    inorder(root->left,k);
    if (ans.size()<k){
    ans.push_back(root->data);
    }
    else 
    {
        return;
    }
    inorder(root->right,k);
}
int kthSmallest(node * root, int k){
    inorder(root,k);
    return ans[k-1];
};
int main(){
    node * root= new node(3);
    root->left=new node(1);
    root->left->right=new node(2);
    root->right=new node(4);
    int k;
    cin>>k;
    cout<<kthSmallest(root,k);
    return 0;
}