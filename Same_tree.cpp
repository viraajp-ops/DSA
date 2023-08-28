#include<bits/stdc++.h>
using namespace std;
class node {
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
bool same_Tree(node * root1,node * root2){
    if (root1==NULL && root2==NULL)
    return true;
    else if (root1==NULL && root2!=NULL)
    return false;
    else if (root1!=NULL && root2==NULL)
    return false;
    else if (root1->data==root2->data){
        return (same_Tree(root1->left,root2->left)&& same_Tree(root1->right,root2->right));
    }
    else 
    return false;
};
int main(){
    node * root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    node * root2=new node(1);
    root2->left=new node(2);
    root2->right=new node(3);
    if (same_Tree(root1,root2)==true)
    cout<<"true";
    else 
    cout<<"false";
    return 0;
}