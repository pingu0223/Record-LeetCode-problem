#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class DSU{
    private:
    int n;
    vector<int> parent;
    vector<int> rank;
    public:
    DSU(int nn):n(nn),parent(vector<int>(nn+1)),rank(vector<int>(nn+1,1)){
        for(int i=0;i<=nn;i++){
            parent[i]=i;
        }
    }
    ~DSU(){
        ;
    }
    int find(int i){
        int temp=i;
        while(parent[temp]!=temp){
            temp=parent[temp];
        }
        while(parent[i]!=temp){
            int j=parent[i];
            parent[i]=temp;
            i=j;
        }
        return temp;
    }
    bool union_(int i,int j){
        int p_i=find(i);
        int p_j=find(j);
        if(p_i==p_j) return false;
        if(rank[p_i]>rank[p_j]) parent[p_j]=p_i;
        else if(rank[p_j]>rank[p_i]) parent[p_i]=p_j;
        else {parent[p_i]=p_j; rank[p_j]++;} 
        return true;
    }
};
struct Edge{
    int from;
    int to;
    int w;
};
struct cmp{
    bool operator()(const Edge& a,const Edge& b){
        return a.w>b.w;
    }
};
int main(){
    int V{0},E{0};
    cin>>V>>E;
    DSU DU(V);
    priority_queue<Edge,vector<Edge>,cmp> pq;
    int cost=0;int cnt=0;
    for(int i=0;i<E;i++){
        int a,b,w;
        cin>>a>>b>>w;
        pq.push({a,b,w});
    }
    while(!pq.empty()){
        Edge c=pq.top();pq.pop();
        int a,b,w;
        a=c.from;b=c.to;w=c.w;
        if(!DU.union_(a,b))continue;
        cost+=w;
        cnt++;
    }
    if(cnt==V-1) cout<<cost;
    else cout<<-1;
}
