#include <iostream>
#include <vector>
using namespace std;
void DFS(vector<vector<int>>& E,vector<bool>& v,int s){
    int n=E[s].size();
    v[s]=true;
    for(int i=0;i<n;i++){
        int temp=E[s][i];
        if(!v[temp]) DFS(E,v,temp);
    }
}
int main(){
    int N{0},M{0};
    cin>>N>>M;
    vector<vector<int>> E(N+1,vector<int>(0));
    vector<bool>visited(N+1,false);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        E[a].push_back(b);
    }
    DFS(E,visited,1);
    for(int i=1;i<=N;i++){
        if(!visited[i]){cout<<-1; return 0;}
    }
    cout<<1;
}
