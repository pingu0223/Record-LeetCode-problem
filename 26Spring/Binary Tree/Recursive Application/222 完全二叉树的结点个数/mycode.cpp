class Solution {
public:
    int countNodes(TreeNode* root) {
     //看到这道题自然而然会想到遍历求解，那我们就随便前序遍历求解一下吧~
        if(root==nullptr) return 0;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};
