#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int find(int i,vector<int>& parent){
    int j=i;
    while(parent[j]!=j){
        j=parent[j];
    }

    while(parent[i]!=j){
        int t=parent[i];
        parent[i]=j;
        i=t;
    }
    return j;
}
void combine(int i,int j,vector<int>& parent,vector<int>& sz){
    int a=find(i,parent);
    int b=find(j,parent);
    if(a==b) return;
    if(sz[a]>sz[b]){
        sz[a]+=sz[b];
        parent[b]=a;
    }
    else{
        sz[b]+=sz[a];
        parent[a]=b;
    }
    return;
}
int main(){
    int N,M;
    cin>>N>>M;
    vector<int> parent(N+1);
    vector<int> sz(N+1,0);
    for(int i=0;i<=N;i++){
        parent[i]=i;
        sz[i]=1;
    }
    for(int i=0;i<M;i++){
        int n;
        cin>>n;
        int it,mem;cin>>it;
        for(int j=1;j<n;j++){
            cin>>mem;
            combine(it,mem,parent,sz);
        }
    }
    int max_=0;
    for(int i=1;i<N+1;i++){
        max_=max(max_,sz[i]);
    }
    cout<<max_<<endl;
   
}
