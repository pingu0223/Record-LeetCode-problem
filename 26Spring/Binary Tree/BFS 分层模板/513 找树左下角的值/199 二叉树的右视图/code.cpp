class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>list;
        if(root==nullptr) return list;
        queue<TreeNode*>q;
        q.push(root);
        int size;
        while(!q.empty()){
            size=q.size();
            list.push_back(q.back()->val);
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                if(current->left!=nullptr){
                    q.push(current->left);
                }
                if(current->right!=nullptr){
                    q.push(current->right);
                }
                q.pop();
            }
        }
        return list;
    }
};//别忘了树的右视图是找q.back();
