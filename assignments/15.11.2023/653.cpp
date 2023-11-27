class Solution {
     void inorderTraversal(TreeNode* root, vector<int> &arr) {
        if(root == NULL)
            return;
        
        inorderTraversal(root->left, arr);
        arr.push_back(root->val);
        inorderTraversal(root->right, arr);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorderTraversal(root, arr);

        int i = 0, j = arr.size()-1;
        while(i < j) {
            int sum = arr[i] + arr[j];
            if(sum == k)
                return true;
            else if(sum > k)
                j--;
            else
                i++;
        }

        return false;
    }
};