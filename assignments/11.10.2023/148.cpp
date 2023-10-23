class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* c=head;
        vector<int>ans;
        while(c!=NULL){
            ans.push_back(c->val);
            c = c->next;
        }
        sort(ans.begin(), ans.end());
        ListNode* c1=head;
        for(int i=0;i<ans.size();i++){
            c1->val = ans[i];
            c1 = c1->next;
        }
        return head;
    }
};