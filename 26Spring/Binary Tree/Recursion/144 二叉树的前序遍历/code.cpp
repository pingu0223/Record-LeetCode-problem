/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorderTraversal(TreeNode* root,vector<int>&list){
        if(root==nullptr) return;
        list.push_back(root->val);
        if(root->left!=nullptr){
            preorderTraversal(root->left,list);
        }
        if(root->right!=nullptr){
            preorderTraversal(root->right,list);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>list;
       if(root==nullptr) return list;
       else{
        preorderTraversal(root,list);
        return list;
       }
    }
};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorderTraversal(TreeNode* root,vector<int>&list){
        if(root==nullptr) return;
        list.push_back(root->val);
        preorderTraversal(root->left,list);
        preorderTraversal(root->right,list);
    }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>list;
       preorderTraversal(root,list);
       return list;
    }
};
