class Solution {
public:
    int maxDepth(TreeNode* root) {
       if(root==nullptr) return 0;
        int leftMaxDepth=maxDepth(root->left);
        int rightMaxDepth=maxDepth(root->right);
        if(leftMaxDepth>rightMaxDepth)return 1+leftMaxDepth;
        else return 1+rightMaxDepth;
      //会自动处理叶子结点的
    }
};
