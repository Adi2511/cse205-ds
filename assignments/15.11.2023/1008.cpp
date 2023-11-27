class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* curr;
        for (int i = 1; i < preorder.size(); i++) {
            curr = root;
            for (int j = 0; j < i; j++) {
                if (preorder[i] < curr->val) {
                    if (curr->left != NULL) {
                        curr = curr->left;
                    } 
                    else {
                        TreeNode* node = new TreeNode(preorder[i]);
                        curr->left = node;
                        break;
                    }
                } 
                else{
                    if (curr->right != NULL) {
                        curr = curr->right;
                    }
                     else {
                        TreeNode* node = new TreeNode(preorder[i]);
                        curr->right = node; 
                        break;
                    }
                }       
            }      
        }
        return root;
    }
};