#include <iostream>
#include <vector>
#include <queue>
int INF=1e9;
using namespace std;
struct Edge{
    int to;
    int weight;
};
struct cmp{
    bool operator()(const pair<int,int>& lhs,const pair<int,int>& rhs){
        return lhs.second>rhs.second;
    }
};
void Find(vector<vector<Edge>>&E,vector<int>& distance,vector<bool>& v,vector<int>& pre,int start,int end){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({start,0});distance[start]=0;pre[start]=start;
    while(!pq.empty()&&v[end]!=true){
        int curr=pq.top().first;
        pq.pop();
        if(v[curr]) continue;
        v[curr]=true;
        int n=E[curr].size();
        for(int i=0;i<n;i++){
            int temp=E[curr][i].to;
            int d=E[curr][i].weight;
            if(v[temp]) continue;
            if(distance[curr]+d<distance[temp]){
                distance[temp]=distance[curr]+d;
                pre[temp]=curr;
                pq.push({temp,distance[temp]});
            }
        }
    }
}
int main(){
    int n{0},m{0};
    cin>>n>>m;
    vector<vector<Edge>> E(n+1,vector<Edge>(0));
    vector<int> distance(n+1,INF);
    vector<bool> visited(n+1,false);
    vector<int> pre(n+1,0);
    vector<int> cnt(n+1,0);
    for(int i=0;i<m;i++){
        int a{0},b{0},w{0};
        cin>>a>>b>>w;
        E[a].push_back({b,w});
    }
    Find(E,distance,visited,pre,1,n);
    if(distance[n]==INF) cout<<-1;
    else cout<<distance[n];
}
