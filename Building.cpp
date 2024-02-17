#include<bits/stdc++.h>
using namespace std ;
int computing(int pos,vector<int>heights,int bricks,int ladders){
    for (int i=pos;i<heights.size()-1;i++){
        if (heights[i]>=heights[i+1]) continue;
        if (ladders>0 && heights[i+1]-heights[i]<=bricks)
        return max(computing(i+1,heights,bricks-(heights[i+1]-heights[i]),ladders),computing(i+1,heights,bricks,ladders-1));
        else if (ladders>0)
        return computing(i+1,heights,bricks,ladders-1);
        else if (heights[i+1]-heights[i]<=bricks)
        return computing(i+1,heights,bricks-(heights[i+1]-heights[i]),ladders);
        else 
        return i;
    }
    return heights.size()-1;
}//This is recursive approach , but it is too much time consuming
int furthestBuilding(vector<int>heights,int bricks ,int ladders){
    //Below is a better approach ->greedy 
    priority_queue<int>p;
    int diff=0;
    int i=0;
    for (i=0;i<heights.size()-1;i++){
        if (heights[i+1]-heights[i]<=0)continue;
        diff=heights[i+1]-heights[i];
        p.push(diff);
        bricks-=diff;
        if (bricks<0){
            bricks+=p.top();
            p.pop();
            ladders--;
        }
        if (ladders<0)
        break;
    }
    return i;
}
int main(){
    int n;
    cin>>n;
    vector<int>heights;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        heights.push_back(a);
    }
    int bricks,ladders;
    cin>>bricks>>ladders;
    cout<<furthestBuilding(heights,bricks,ladders);
    return 0;
}