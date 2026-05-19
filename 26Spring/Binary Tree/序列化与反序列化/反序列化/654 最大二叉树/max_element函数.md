# max_element函数讲解

## 头文件
<algorithm>

## 用法
```cpp
auto it=max_element(vec.begin(),vec.end())
int value=*it;
int index=it-vec.begin();
```
返回的是位置，通过解引用获得最大值，通过减去begin获得索引

## 使用目的
从一堆值里面获得最大值^^
