class Solution {
public:
    TreeNode *tree(vector<int> &preorder , int preLow , int preHigh, vector<int> &inorder , int inLow , int inHigh){
    if(preLow>preHigh or inLow > inHigh) return NULL;

    TreeNode *root = new TreeNode(preorder[preLow]);
    int inIndex = inLow;

    while(inorder[inIndex] != root->val) inIndex++;
     int countLeft = inIndex - inLow;


      root->left = tree(preorder , preLow + 1 , preLow + countLeft , inorder ,inLow , inIndex - 1 );
      
      root->right = tree(preorder , preLow + countLeft + 1 , preHigh , inorder , inIndex + 1 , inHigh);
      return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return tree(preorder , 0 , preorder.size() - 1 , inorder , 0 , inorder.size() -1 );
    }
};