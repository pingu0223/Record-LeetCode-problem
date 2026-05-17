# 思路归纳

## 我的思路
**正如前面解题思路所言**：
```text
           递归
           /  \
          /    \
   分治递归     遍历递归
```

所以我想：
1. 分治递归不太方便，因为这个不可以拆解成子问题
2. 遍历递归中的前序遍历与后序遍历都不太方便
3. 中序遍历含nullptr结点->求出中序遍历后的vector<int>，判断是不是回文
4. 层次遍历含nullptr结点->求出每一层的序列->再判断是不是回文

### 中序遍历：
针对这个例子：

```[5,2,2,4,null,null,1,null,1,null,4,2,null,2,null]```

会出问题

## 正确思路

### 思路1————区分内外侧

#### 详细介绍：
即把我们的左右子树劈开，分别进行遍历——双树“后序”遍历
```text
对于左子树与右子树，
左子树进行：左右中
右子树进行：右左中
先判断左的左（外侧)与右的右（外侧）是否相同
再判断左的右（内侧）与右的左(内侧）是否相同

而且其中对于左右根结点是否存在的判断情况讨论得特别好
```

#### 代码：
```cpp
class Solution {
public:
    bool compare(TreeNode* left,TreeNode* right){
        if(left==nullptr&&right==nullptr) return true;
        else if(left==nullptr&&right!=nullptr) return false;
        else if(left!=nullptr&&right==nullptr)return false;
        else if(left->val!=right->val) return false;
     bool outside=compare(left->left,right->right);
     bool inside=compare(left->right,right->left);
     return outside&&inside;   
    }
    bool isSymmetric(TreeNode* root) {
        //无法使用分治递归，那就尝试遍历递归
        //遍历递归分成了前序遍历，中序遍历，后序遍历，层次遍历
        if(root==nullptr) return true;
        else return compare(root->left,root->right);
    }
};
```





