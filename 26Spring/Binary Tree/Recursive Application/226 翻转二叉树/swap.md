# 学习一下Swap

## 所在头文件

- algorithm
- bits/stdc++.h

## 本质

```将两个变量的值交换```

 相当于：

 ```cpp
int a,b;cin>>a>>b;
int c=a;
a=b;b=a;
```

## 用法

当我们想要**交换**变量a与变量b的值时：

只需要使用swap(a,b)即可

## 适用类型

1. int与int，double与double等等
2. vector
3. string
4. pair
5. struct
6. 大部分STL容器
