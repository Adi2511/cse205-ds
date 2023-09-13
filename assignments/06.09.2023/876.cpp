class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* res;
        int i = 0;
        res = head;
        while( head != NULL )
        {
            if( i%2 == 1 )
                res = res->next;
            head = head->next;
            i++;
        }
        return res;
    }
};