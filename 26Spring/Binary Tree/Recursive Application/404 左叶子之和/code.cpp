class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
       if(root==nullptr) return 0;
       if(root->left==nullptr) return sumOfLeftLeaves(root->right);
       else{
        int sum=sumOfLeftLeaves(root->right)+sumOfLeftLeaves(root->left);
        if(root->left->right==nullptr&&root->left->left==nullptr){
            return sum+root->left->val;
        }
        return sum;
       }
    }
};//别忘记这个也是在找叶子哦
