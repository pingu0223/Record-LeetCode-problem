# 144二叉树的前序遍历

## 题目描述

给你二叉树的根节点 root ，返回它节点值的**前序**遍历。```

## 题目思路

- 递归
- 先遍历左子树
- 再遍历右子树

## 题解

```cpp
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& list){
        if(root == nullptr) return;

        list.push_back(root->val);

        preorder(root->left, list);
        preorder(root->right, list);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> list;
        preorder(root, list);
        return list;
    }
};
```

省略了·多余的if-else判断！
