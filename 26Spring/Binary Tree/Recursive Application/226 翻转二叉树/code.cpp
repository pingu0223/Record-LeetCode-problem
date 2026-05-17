//My method:
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return root;
        TreeNode* temp=root->right;
        root->right=invertTree(root->left);
        root->left=invertTree(temp);
        return root;
    }
};
//Typical Method:
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return root;
        swap(root->left,root->right);
        root->right=invertTree(root->right);
        root->left=invertTree(root->left);
        return root;
    }
};
