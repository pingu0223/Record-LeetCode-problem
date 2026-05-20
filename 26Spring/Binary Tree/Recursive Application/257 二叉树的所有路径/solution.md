# 解题思路——分治递归

## 思路详解
```text
其实本质上也是找根结点左结点到叶子结点的路径，右结点到叶子结点的路径
然后再把得到的string与前面组合一下子就可以啦
就是分治递归，大问题拆成小问题
```

## 题目解答
```cpp
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {vector<string>s;
        if(root==nullptr) return s;
        if(root->left==nullptr&&root->right==nullptr){
            s.push_back(to_string(root->val));
            return s;
        }
        vector<string> Left=binaryTreePaths(root->left);
        vector<string> Right=binaryTreePaths(root->right);
        Left.insert(Left.end(),Right.begin(),Right.end());
        int i;
        for(i=0;i<Left.size();i++){
            Left[i]=to_string(root->val)+"->"+Left[i];
        }
        return Left;
        
    }
};
```
