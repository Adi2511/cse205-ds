class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> temp;
        ListNode* p = head;
        while(p){
            temp.push_back(p->val);
            p = p->next;
        }
        sort(temp.begin(), temp.end());
        p = head;
        int i=0;
        while(p){
            p->val = temp[i++];
            p = p->next;
        }
        return head;
    }
};