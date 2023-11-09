#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> final(vector<vector<int>>& image, int sr, int sc, int color,int back_color) {
    if(back_color==color)
    return image;
    image[sr][sc]=color;
    if (sr>0 && image[sr-1][sc]==back_color){
        image=final(image,sr-1,sc,color,back_color);
    }
    if (sr<image.size()-1 && image[sr+1][sc]==back_color){
        image=final(image,sr+1,sc,color,back_color);
    }
    if (sc>0 && image[sr][sc-1]==back_color)
    image=final(image,sr,sc-1,color,back_color);
    if (sc<image[0].size()-1 && image[sr][sc+1]==back_color)
    image=final(image,sr,sc+1,color,back_color);
    return image;
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    return final(image,sr,sc,color,image[sr][sc]);
}

int main(){
    vector<vector<int>>image;
    int rows,col;
    cin>>rows>>col;
    for(int i=0;i<rows;i++){
        vector<int>temp;
        for(int j=0;j<col;j++){
            int b;
            cin>>b;
            temp.push_back(b);
        }
        image.push_back(temp);
    }
    int sr,sc;
    cin>>sr>>sc;
    int colour;
    cin>>colour;
    image=floodFill(image,sr,sc,colour);
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<image[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}