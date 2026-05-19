# 错误分析

## 错误点——记录cut时从什么地方起始
``` cpp
for(i=length-n;i<length;i++){//这里
        cut+=s[i];    
    }
```
i到底是从**length-n**,还是从**length-n-1**处起始？  
这时候就需要思考一个点  
如果对于length=5，n=2，即想要获得最后2个值时  
我们要获得第4个与第5个元素，在字符串中的下标为3与4  
而length-n=3，所以是从length-n开始的哦  
