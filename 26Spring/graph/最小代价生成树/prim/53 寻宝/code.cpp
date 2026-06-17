#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int INF=1e9;
struct Edge{
    int to;
    int w;
};
struct cmp{
    bool operator()(const pair<int,int>lhs,const pair<int,int>rhs){
        return lhs.second>rhs.second;
    }
};
void prim(vector<vector<Edge>>& E,vector<int>& mindis,vector<int>& pre,vector<bool>& v,int start){
    mindis[start]=0;pre[start]=start;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({start,0});
    while(!pq.empty()){
        int curr=pq.top().first;pq.pop();
        if(v[curr])continue;
        v[curr]=true;
        int nn=E[curr].size();
        for(int i=0;i<nn;i++){
            int temp=E[curr][i].to;
            int cost=E[curr][i].w;
            if(v[temp])continue;
            if(cost>=mindis[temp])continue;
            mindis[temp]=cost;
            pre[temp]=curr;
            pq.push({temp,cost});
        }
    }
}
int main(){
    int n{0},m{0};
    cin>>n>>m;
    vector<vector<Edge>>E(n+2,vector<Edge>(0));
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        E[a].push_back({b,w});
        E[b].push_back({a,w});
    }
    vector<int>mindis(n+1,INF);
    vector<int>pre(n+1,0);
    vector<bool>in(n+1,false);
    prim(E,mindis,pre,in,1);int result=0;
    for(int i=1;i<=n;i++){
        result+=mindis[i];
    }
    cout<<result;
}
