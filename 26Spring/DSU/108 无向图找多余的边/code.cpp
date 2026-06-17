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
int main(){
    int N{0};
    cin>>N;
    DSU d(N);
    for(int i=0;i<N;i++){
        int s,t;
        cin>>s>>t;
        if(!d.union_(s,t)){cout<<s<<" "<<t<<'\n';return 0;}
    }
}
