#include <iostream>
#include <vector>
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
    void union_(int i,int j){
        int p_i=find(i);
        int p_j=find(j);
        if(p_i==p_j) return;
        if(rank[p_i]>rank[p_j]) parent[p_j]=p_i;
        else if(rank[p_j]>rank[p_i]) parent[p_i]=p_j;
        else {parent[p_i]=p_j; rank[p_j]++;} 
    }
};
int main(){
    int N{0},M{0};
    cin>>N>>M;
    DSU x(N);
    for(int a=0;a<M;a++){
        int i,j;cin>>i>>j;
        x.union_(i,j);
    }
    int s,t;
    cin>>s>>t;
    if(x.find(s)==x.find(t)) cout<<1;
    else cout<<0;
}
