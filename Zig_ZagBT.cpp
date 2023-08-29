#include<bits/stdc++.h>
using namespace std;
class node{
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
vector<int>zigZagTraversal(node * root){
    queue<node * >q;
    vector<int> ans;
    q.push(root);
    if (root!=NULL){
        bool reverse=false;
        while (!q.empty())
        {
            int len=q.size();
            int size1=ans.size();
            for(int i=0;i<len;i++){
                    ans.push_back(q.front()->data);
                    if (q.front()->left!=NULL)
                    q.push(q.front()->left);
                    if (q.front()->right!=NULL)
                    q.push(q.front()->right);
                    q.pop();
           }
           int size2=ans.size()-1;
           if (reverse){
            for(int i=0;i<=(size2-size1)/2;i++){
                int temp=ans[i+size1];
                ans[i+size1]=ans[size2-i];
                ans[size2-i]=temp;
            }
           }
           reverse=!reverse;
        }
        
    }
    return ans;
};
int main(){
    node * root = new node(7);
    root->left=new node(9);
    root->left->left=new node(8);
    root->left->right=new node(8);
    root->left->left->left=new node(10);
    root->left->left->right=new node (9);
    root->right=new node(7);
    root->right->left=new node(6);
    vector<int > ans=zigZagTraversal(root);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}