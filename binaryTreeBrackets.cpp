#include<bits/stdc++.h>
using namespace std ;
class node {
    public:
    int data;
    node * left ;
    node * right ;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node * treeFromString(string s){
    if (s=="")
    return NULL;
    int num=0;
    int pos=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='('){
            pos=i;
            break;
        }
        else{
            num=num*10+s[i]-'0';
        }
    }
    node * root =new node (num);
    cout<<"NewNodeCreated "<<num<<" "<<s<<"\n";
    int leftP=0;
    int rightP=0;
    for (int i=pos;i<s.size();i++){
        if(s[i]=='(')
        leftP++;
        else if (s[i]==')')
        rightP++;
        if (leftP==rightP && leftP!=0){
            root->left=treeFromString(s.substr(pos+1,i-pos-1));
            if (i!=s.size()-1)
            root->right=treeFromString(s.substr(i+2,s.size()-i-3));
            break;
        }
    }
    return root;
}
void inorder(node * root ){
    if (root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    string s;
    cin>>s;
    node * root =treeFromString(s);
    inorder(root);
    return 0;
}