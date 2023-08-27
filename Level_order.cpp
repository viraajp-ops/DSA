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
vector<vector<int>>level_order(node * root){
    vector<vector<int>>ans;
    queue<node*>traverse;
    traverse.push(root);
    while (!traverse.empty())
    {
        if (traverse.front()==NULL)
        traverse.pop();
        else {
        int st=traverse.size();
        vector<int>dynam;
        for(int i=0;i<st;i++){
            dynam.push_back(traverse.front()->data);
            if (traverse.front()->left!=NULL)
            traverse.push(traverse.front()->left);
            if (traverse.front()->right!=NULL)
            traverse.push(traverse.front()->right);
            traverse.pop();
        }
        ans.push_back(dynam);
        }
    }
    return ans;
}
int main(){
    node * root = new node(3);
    root->left=new node(9);
    root->left->left=new node(1);
    root->right=new node(20);
    root->right->left=new node(15);
    root->right->right=new node(7);
    vector<vector<int>> ans=level_order(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}