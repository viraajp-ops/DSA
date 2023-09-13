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
    return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
int iter=0;
int search(vector<int>inorder,int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if (inorder[i]==curr)
        return i;
    }
}
node * buildTree(vector<int>preorder,vector<int>inorder,int start,int end){
    if (start<=end){
        node * root=new node(preorder[iter]);
        if (start==end){
            iter++;
        return root;
        }
        int pos=search(inorder,start,end,preorder[iter]);
        iter++;
        root->left=buildTree(preorder,inorder,start,pos-1);
        root->right=buildTree(preorder,inorder,pos+1,end);
        return root;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>preorder;
    vector<int>inorder;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        preorder.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        inorder.push_back(a);
    }
    print(buildTree(preorder,inorder,0,n-1));
    return 0;
}