class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0) return nullptr;
        TreeNode* root=new TreeNode(preorder[0]);
        if(preorder.size()==1) return root;
        //开找根结点在中序中的位置
        auto it=find(inorder.begin(),inorder.end(),preorder[0]);
        int index=it-inorder.begin();
        //开切
        vector<int>L_inorder(inorder.begin(),inorder.begin()+index);
        vector<int>R_inorder(inorder.begin()+index+1,inorder.end());
        vector<int>L_preorder(preorder.begin()+1,preorder.begin()+1+L_inorder.size());//别忘了前序是要除去第一个点
        vector<int>R_preorder(preorder.begin()+L_inorder.size()+1,preorder.end());
        root->left=buildTree(L_preorder,L_inorder);
        root->right=buildTree(R_preorder,R_inorder);
        return root;
    }
};
