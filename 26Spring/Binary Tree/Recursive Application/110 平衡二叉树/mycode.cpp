//看起来简洁，但是重复计算了，很容易stack overflow，需要利用树形DP，看我之后解题=>=
class Solution {
public:
    int depth(TreeNode* root){
        if(root==nullptr) return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        if(!isBalanced(root->left)) return false;
        if(!isBalanced(root->right)) return false;
        if(abs(depth(root->left)-depth(root->right))>1) return false;
        return true;
    }
};
