#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    bool data;
    node * next;
    node (bool val){
        data=val;
        next=NULL;
    }
};
int decimalValue(node * head){
    int mo=1000000007;
    int ans =0;
    while (head!=NULL){
        ans=(ans *2)%mo+head->data;
        ans=ans%mo;
        head=head->next;
    }
    return ans ;
}
int main(){
    node * head = new node (0);
    head->next=new node (1);
    head->next->next=new node (1);
    cout<<decimalValue(head);
    return 0;
}