# 就这样投机取巧

## 题干
```text
给定一个字符串 s，它包含小写字母和数字字符，请编写一个函数，将字符串中的字母字符保持不变，而将每个数字字符替换为number。 例如，对于输入字符串 "a1b2c3"，函数应该将其转换为 "anumberbnumbercnumber"。
```
## 我的投机取巧法。

```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;int z=s.size();
    for(i=0;i<z;i++){
        if(s[i]>='0'&&s[i]<='9'){
            cout<<"number";
        }
        else{
            cout<<s[i];
        }
    }
}
```
