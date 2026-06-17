# 错误集合
## 注意priority_queue怎么写:
```cpp
struct cmp{
    bool operator()(const pair<int,int>& lhs,const pair<int,int>& rhs){
        return lhs.second>rhs.second;
    }
};
priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;

```
## 注意不要把条件写坏：
```cpp
while(!pq.empty()&&v[end]!=true)
终止条件
```
