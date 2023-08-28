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
vector <int> rightView(node * root){
    queue<node*>iter;
    iter.push(root);
    vector<int> ans;
    if (root!=NULL){
    while (!iter.empty())
    {
        int len=iter.size();
        for(int i=0;i<len;i++){
            if (i==len-1)
            ans.push_back(iter.front()->data);
            if (iter.front()->left!=NULL)
            iter.push(iter.front()->left);
            if (iter.front()->right!=NULL)
            iter.push(iter.front()->right);
            iter.pop();
        }
    }
    }
    return ans;
};
int main(){
    node * root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->left->right=new node(8);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    vector<int>ans = rightView(root);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}