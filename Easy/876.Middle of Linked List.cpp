/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
};