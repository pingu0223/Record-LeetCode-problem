class Solution {
public:
    void inorderTraversal(TreeNode* root, vector<int>& list){
        if(root==nullptr) return;
        inorderTraversal(root->left,list);
        list.push_back(root->val);
        inorderTraversal(root->right,list);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>list;
        inorderTraversal(root,list);
        return list;
    }
};
