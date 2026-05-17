class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    if(inorder.size()==0) return nullptr;
    int value=postorder[postorder.size()-1];
    TreeNode* root=new TreeNode{value};
    auto pos=find(inorder.begin(),inorder.end(),value);
    int index=pos-inorder.begin();
    vector<int>sub_inorder_l(inorder.begin(),inorder.begin()+index);
    vector<int>sub_inorder_r(inorder.begin()+index+1,inorder.end());
    int n_left=sub_inorder_l.size();
    vector<int>sub_postorder_l(postorder.begin(),postorder.begin()+n_left);
    vector<int>sub_postorder_r(postorder.begin()+n_left,postorder.end()-1);
    root->left=buildTree(sub_inorder_l,sub_postorder_l);
    root->right=buildTree(sub_inorder_r,sub_postorder_r);
    return root;
    }
};
