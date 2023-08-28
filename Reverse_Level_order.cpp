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
vector<int>level_order(node * root){
    queue<node * >q;
    vector<int>ans;
    q.push(root);
    if (root!=NULL){
    while (!q.empty())
    {
        int len=q.size();
        for(int i=0;i<len;i++){
            ans.push_back(q.front()->data);
            if (q.front()->right!=NULL)
            q.push(q.front()->right);
            if (q.front()->left!=NULL)
            q.push(q.front()->left);
            q.pop();
        }
    }
    for(int i=0;i<ans.size()/2;i++){
        int temp=ans[i];
        ans[i]=ans[ans.size()-1-i];
        ans[ans.size()-1-i]=temp;
    }
    }
    else 
    return ans;
};
int main(){
    node * root=new node(10);
    root->left=new node(20);
    root->left->left=new node(40);
    root->left->right=new node(60);
    root->right=new node(30);
    vector<int>ans=level_order(root);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}