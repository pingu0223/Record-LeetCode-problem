#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int dfs(int x,int y,vector<vector<bool>>&visited,vector<string>&matrix){
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    visited[x][y]=true;
    int cns=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];int ny=y+dy[i];
        if(nx<0||nx>=matrix.size()||ny<0||ny>=matrix[0].size())continue;
    if(matrix[x+dx[i]][y+dy[i]]=='*'&&visited[x+dx[i]][y+dy[i]]==false){
        cns+=dfs(x+dx[i],y+dy[i],visited,matrix);
    }
}
return cns;
}
int main(){
    int W,H;
    cin>>W>>H;
    vector<string>matrix;
    vector<vector<bool>>visited;
    for(int i=0;i<H;i++){
        string it;
        cin>>it;
        matrix.push_back(it);
        vector<bool>its(W,false);
        visited.push_back(its);
    }
    vector<int>size;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(visited[i][j]==false&&matrix[i][j]=='*'){
                int sz=dfs(i,j,visited,matrix);
                size.push_back(sz);
            }
        }
    }
    int max_=0;
    for(int i=0;i<size.size();i++){
        max_=max(max_,size[i]);
    }
    cout<<max_;
}
