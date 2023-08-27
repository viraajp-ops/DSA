#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    if (N==0){
        cout<<-1;
    }
    else {
        if ((N&N-1)==0){
            int pos=0;
            while ((N|(1<<pos))!=N)
            {
                pos++;
            }
            cout<<pos+1;
        }
        else 
        cout<<-1;
    }
    return 0;
}