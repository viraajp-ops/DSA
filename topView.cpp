#include<bits/stdc++.h>
using namespace std ;
class node {
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
vector<int> topView(node * root){
    map<int,int>mapping;
    queue<pair<node *,int>>qu;
    qu.push(make_pair(root,0));
    while (qu.size()>0)
    {
        if (mapping.find(qu.front().second)!=mapping.end()){

        }
        else {
            mapping[qu.front().second]=qu.front().first->data;
        }
        if (qu.front().first->left!=NULL)
        qu.push(make_pair(qu.front().first->left,qu.front().second-1));
        if (qu.front().first->right!=NULL)
        qu.push(make_pair(qu.front().first->right,qu.front().second+1));
        qu.pop();
    }
    vector<int>ans;
    for(auto it:mapping){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){
    node * root =new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    vector<int>ans = topView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}