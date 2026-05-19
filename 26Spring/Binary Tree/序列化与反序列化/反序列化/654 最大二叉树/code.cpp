class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)return nullptr;
        auto it=max_element(nums.begin(),nums.end());
        int value=*it;
        TreeNode* root=new TreeNode{value};
        if(nums.size()==1) return root;
        int index=it-nums.begin();
        vector<int>L_n(nums.begin(),nums.begin()+index);
        vector<int>R_n(nums.begin()+index+1,nums.end());
        root->left=constructMaximumBinaryTree(L_n);
        root->right=constructMaximumBinaryTree(R_n);
        return root;
    }
};
