class Solution {
public:
    void inorder(TreeNode* root, TreeNode*& prev, TreeNode*& first, TreeNode*& end) {
        if(root==NULL)
        {
            return;
        }
       
        inorder(root->left, prev, first, end);
        if (prev!=NULL) 
        {
            if (root->val < prev->val)
            {
                if(first==NULL)
                {
                    first = prev;
                }
            end = root;
            }
        }
        prev = root;
        inorder(root->right, prev, first, end);
    }
    void recoverTree(TreeNode* root) {
        TreeNode *prev = nullptr, *first = nullptr, *end = nullptr;
        inorder(root, prev, first, end);
        swap(first->val, end->val);
        return;
    }
};