class Solution {
public:
    bool compare(TreeNode* a, TreeNode* b){
     if(a==nullptr&&b==nullptr) return true;
     else if(a!=nullptr&&b==nullptr) return false;
     else if(a==nullptr&&b!=nullptr) return false;
     else if(a->val!=b->val) return false;
     else{
        bool leftTree=compare(a->left,b->left);
        bool rightTree=compare(a->right,b->right);
        return leftTree&&rightTree;
     }  
    }//这个递归是对我们选定的结点与subRoot对比是不是同一棵子树，嵌套递归，递归套递归=.=
    bool select(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr) return false;
        if(compare(root,subRoot))return true;
        if(select(root->left,subRoot))return true;
        if(select(root->right,subRoot))return true;
        else return false;
    }//这个递归是后序递归访问我们的主树的每一个结点
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        TreeNode* temp=root;
        if(subRoot==nullptr) return true;
        else if(root==nullptr) return false;
        return select(root,subRoot);
    }
};
