class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>>ans;
        
        if(!root) return ans;
        queue<TreeNode*> q; 
        q.push(root); 
        q.push(NULL);
        vector<int>result;
        while(!q.empty()) {
            TreeNode *temp = q.front(); 
            q.pop();
            if(temp ==NULL){
                ans.push_back(result);
               result.resize(0);
                      if(!q.empty()){
                       q.push(NULL);     
                      }
            }
            else{
                result.push_back(temp->val);
              if(temp->left ) 
                q.push(temp->left); 
               if(temp->right ) 
                q.push(temp->right); 
            }      
             
        }
        return ans; 
    }
};