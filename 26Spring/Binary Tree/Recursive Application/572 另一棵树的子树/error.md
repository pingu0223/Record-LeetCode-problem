# 错误点

错误片段：

```cpp
 bool select(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr) return false;//这里
        if(compare(root,subRoot))return true;
        if(select(root->left,subRoot))return true;
        if(select(root->right,subRoot))return true;
        else return false;
    }
```

最开始没有添加对于**root==nullptr**的判断：  
因为我认为我们在compare里面已经处理过了  
但是我忘掉了：后面要访问root->left与root->right  
会导致崩溃
