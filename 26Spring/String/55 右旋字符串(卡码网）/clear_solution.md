# 更简洁的解答方法

## 解题思路
```text
我们发现，只需要把整个字符串倒置，就把所有字符串位置颠倒
然后再按照要翻转的范围把我们的字符串分段颠倒，即可啦啦啦
```

## 代码示例
```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    reverse(s.begin(),s.begin()+n);
    reverse(s.begin()+n,s.end());
    cout<<s;
}
```
