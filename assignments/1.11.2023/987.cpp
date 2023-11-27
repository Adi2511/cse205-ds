class Solution {
public:
    map<int,map<int,multiset<int>>> mpp;
    void preorder(TreeNode *root, int col, int row)
    {
        if(root==NULL){
            return ;
        }
        mpp[col][row].insert(root->val);
        preorder(root->left, col-1, row+1);
        preorder(root->right, col+1, row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        preorder(root,0,0);
        vector<vector<int>>ans;     
        for(auto col : mpp){
            vector<int>vertical;
            for(auto row : col.second){
                for(auto ele : row.second){
                    vertical.push_back(ele);
                }
            }
            ans.push_back(vertical);
        }
        return ans;
    }
};