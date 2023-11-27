class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<TreeNode *> as;
            as.push_back(root);          
            vector<int>ans;
            if(root==NULL) return ans;
            while(as.empty()!=true){
                int n=as.size();
                ans.push_back(as[n-1]->val); 
                for(int i=0;i<n;i++){
                    if(as[i]->left!=NULL) as.push_back(as[i]->left);
                    if(as[i]->right!=NULL) as.push_back(as[i]->right);
                }
                for(int i=0;i<n;i++){
                    as.erase(as.begin());
                }
            }
            return ans;
    }
};