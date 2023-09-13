class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* curNext = head;

        while(cur!=NULL){
            curNext = cur->next;
            cur->next = prev;
            prev = cur;
            cur = curNext;
        }
        return prev;
    }
};