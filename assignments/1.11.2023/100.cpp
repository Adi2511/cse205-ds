class Solution {
public:
    bool check(TreeNode *p, TreeNode *q){
        if(p == NULL and q == NULL) return true;
        if((p == NULL and q != NULL) or (p != NULL and q == NULL)) return false;
        if(p->val != q->val) return false;
        return check(p->left,q->left) && check(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p,q);
    }
};