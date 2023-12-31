**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        int len = 0;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int lenA = length(headA);
        int lenB = length(headB);

        int skip = abs(lenA - lenB);

        if(lenA > lenB){
            while(skip--)
                headA = headA->next;
        }
        else{
            while(skip--)
                headB = headB->next;
        }

        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
 
    }
};