class BSTIterator {
    vector<int> nodes;
    int curr = -1;
    void inorder(TreeNode* root) {
        if(!root) return;
        inorder(root->left);
        nodes.push_back(root -> val);
        inorder(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        if(curr == nodes.size() - 1) return -1;
        curr++;
        return nodes[curr];
    }
    
    bool hasNext() {
        if(curr == nodes.size() - 1) return false;
        return true;
    }
};