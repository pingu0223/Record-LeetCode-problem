class Solution {
public:
    int maxDepth(TreeNode* root) {
       if(root==nullptr) return 0;
       if(root->left==nullptr&&root->right==nullptr) return 1;
       else{
        int leftMaxDepth=maxDepth(root->left);
        int rightMaxDepth=maxDepth(root->right);
        if(leftMaxDepth>rightMaxDepth)return 1+leftMaxDepth;
        else return 1+rightMaxDepth;
       }
    }
};
