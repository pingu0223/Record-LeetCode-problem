class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>list;
        if(root==nullptr) return list;
        stack<TreeNode*> s;
        stack<bool> visited;
        s.push(root);
        visited.push(false);
        while(!s.empty()){
            TreeNode* current=s.top();
            if(visited.top()==true){
                list.push_back(current->val);
                s.pop();
                visited.pop();
                continue;
            }
            visited.pop();
            s.pop();
            if(current->right!=nullptr){
                s.push(current->right);
                visited.push(false);
            }
            s.push(current);
            visited.push(true);
            if(current->left!=nullptr){
                s.push(current->left);
                visited.push(false);
            }
        }
        return list;
    }
};
