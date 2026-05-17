# 介绍下vector关于反序列化相关的操作

## 操作列举：
- find
- 切片

## 代码示例
### find（algorithm里面的函数）

```cpp
vector<int> inorder;
auto it=find(inorder.begin(),inorder.end(),x);
//传入寻找的起始处，终止处，及寻找的值，返回迭代器
int index=it-inorder.begin();
//用迭代器减去起始处既可以获得寻找的值所在的索引
```

### 切片

```cpp
vector<int> inorder;
int index;
vector<int> subinorder(inorder.begin(),inorder.begin()+index);
//左闭右开
```
