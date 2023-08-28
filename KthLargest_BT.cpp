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
vector<int>ans;
void inorder(node * root){
    if (root ==NULL)
    return ;
    inorder(root->left);
    ans.push_back(root->data);
    inorder(root->right);
}
int kthLargest(node * root,int k){
    inorder(root);
    return ans[ans.size()-k];
};
int main(){
    node * root =new node (4);
    root->left=new node(2);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->left->left->left=new node(0);
    root->right=new node(9);
    root->right->left=new node(7);
    root->right->right=new node(10);
    int k;
    cin>>k;
    cout<<kthLargest(root,k);
    return 0;
}