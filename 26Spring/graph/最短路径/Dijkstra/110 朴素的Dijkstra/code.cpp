#include <iostream>
#include <vector>
int INF=1e9;
using namespace std;
void Find(vector<vector<int>>& matrix,vector<int>& distance,vector<bool>& v,vector<int>&pre,int s,int e){
    if(s==e) {distance[s]=0;v[s]=true;pre[s]=s;return;}
    int n=matrix.size()-1;
    distance[s]=0;pre[s]=s;v[s]=true;int curr=s;
    for(int i=0;i<n-1;i++){
        int nn=matrix[curr].size();
        for(int j=1;j<nn;j++){
            if(matrix[curr][j]==INF) continue;
            if(matrix[curr][j]+distance[curr]<distance[j]){
                pre[j]=curr;
                distance[j]=matrix[curr][j]+distance[curr];
            }
        }
        int min=0;
        for(int j=1;j<nn;j++){
            if(v[j])continue;
            if(distance[j]<distance[min]) min=j;
        }
        if(min==0) return;
        v[min]=true;
        curr=min;
        if(v[e]==true) return;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n+1,vector<int>(n+1,INF));
    vector<int>distance(n+1,INF);
    vector<bool>visited(n+1,false);
    vector<int>pre(n+1,0);
    for(int i=0;i<m;i++){
        int a{0},b{0},w{0};
        cin>>a>>b>>w;
        matrix[a][b]=w;
    }
    Find(matrix,distance,visited,pre,1,n);
    if(distance[n]==INF) cout<<-1;
    else cout<<distance[n];
}
