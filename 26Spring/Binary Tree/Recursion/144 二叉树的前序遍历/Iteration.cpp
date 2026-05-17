class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>list;
       if(root==nullptr) return list;
       stack<TreeNode*> s;
       s.push(root);
       while(!s.empty()){
        TreeNode* current=s.top();
        s.pop();
        list.push_back(current->val);
        if(current->right!=nullptr) s.push(current->right);
        if(current->left!=nullptr) s.push(current->left);
       }
       return list;
    }
};
