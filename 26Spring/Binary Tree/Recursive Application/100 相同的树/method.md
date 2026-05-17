# 思路

看作两棵树，分别递归然后对比，类似于101

# 解法
```cpp
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr) return true;
        else if(p==nullptr&&q!=nullptr) return false;
        else if(p!=nullptr&&q==nullptr) return false;
        else if(p->val!=q->val) return false;
        else{
            bool leftTree=isSameTree(p->left,q->left);
            bool rightTree=isSameTree(p->right,q->right);
            return leftTree&&rightTree;
        }     
    }
};
```
