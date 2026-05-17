class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int length=0;
        queue<TreeNode*> q;
        q.push(root);
        int size;
        vector<TreeNode*>leftVal;//这里还可以更简化，如下
        while(!q.empty()){
            length++;
            size=q.size();
            leftVal.push_back(q.front());
            for(int i=0;i<size;i++){
            TreeNode* current=q.front();
            if(current->left!=nullptr) q.push(current->left);
            if(current->right!=nullptr) q.push(current->right);
            q.pop();
            }
        }
        return leftVal[length-1]->val;
    }
};
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int length=0;
        queue<TreeNode*> q;
        q.push(root);
        int size;
        int result;
        while(!q.empty()){
            length++;
            size=q.size();
            result=q.front()->val;
            for(int i=0;i<size;i++){
            TreeNode* current=q.front();
            if(current->left!=nullptr) q.push(current->left);
            if(current->right!=nullptr) q.push(current->right);
            q.pop();
            }
        }
        return result;
    }
};



