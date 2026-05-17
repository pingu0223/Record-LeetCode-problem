class Solution {
public:
    void postorderTraversal(TreeNode* root,vector<int>& list){
        if(root==nullptr) return;
        postorderTraversal(root->left,list);
        postorderTraversal(root->right,list);
        list.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>list;
        postorderTraversal(root,list);
        return list;
    }
};
