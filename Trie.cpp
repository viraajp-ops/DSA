#include<bits/stdc++.h>
using namespace std;
class Trie{
    public:
    bool isLeaf;
    Trie * next[26];
    Trie(){
        isLeaf=false;
        for(int i=0;i<26;i++){
            next[i]=NULL;
        }
    }
};
bool searcht(Trie * root,string key){
    Trie * it = root;
    for(int i=0;i<key.size();i++){
        if (it->next[key[i]-'a']==NULL)
        return false;
        else {
            it=it->next[key[i]-'a'];
        }
    }
    return it->isLeaf;
}
void insert(Trie * root, string key){
    Trie * it=root;
    for(int i=0;i<key.size();i++){
        if (it->next[key[i]-'a']==NULL){
            it->next[key[i]-'a']=new Trie();
        }
        it=it->next[key[i]-'a'];
    }
    it->isLeaf=true;
}
int main(){
    int n;
    cin>>n;
    string key[n];
    Trie * root=new Trie();
    for(int i=0;i<n;i++){
        cin>>key[i];
        insert(root,key[i]);
    }
    string searchi;
    cin>>searchi;
    cout<<searcht(root,searchi);
    return 0;
}