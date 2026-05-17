# 来学习一下max函数

## 头文件
algorithm

## 用法

输入值：两个同类型值

输出值：大的那个值
```cpp
int c=max(a,b)
```

## 适用范围

1. int
2. char
3. double
4. string

## 拓展

### 三个数怎么办？
```max(a,max(b,c))```

### 找最小值怎么办？
```min(a,b)```

### 在一个范围内找最大值怎么办？
```max_element(nums.begin(), nums.end())```

但是返回的是解引用，所以需要在前面加上“*”
