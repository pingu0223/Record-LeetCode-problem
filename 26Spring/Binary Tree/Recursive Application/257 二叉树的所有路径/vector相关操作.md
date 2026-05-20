# 这里记录一下vector的相关操作

## 当某函数返回值为vector时怎么承接？
直接承接就可以
```cpp
vector<Type> vec=function(x);
```

## 当想要拼接两个vector时
利用vector自带的insert函数
```cpp
s.insert(s.end(),t.begin(),t.end())
//插入位置 起始位置 终止位置
```
