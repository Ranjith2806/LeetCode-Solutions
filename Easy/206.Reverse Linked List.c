struct ListNode* reverseList(struct ListNode* head){
    typedef struct ListNode node;
        node *curr = head;
        node* prev=NULL;
        node* next=NULL;
        while(curr != NULL)
        {
            next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    //Time Complexity:O(n)
    //Space complexity:O(1)
    }
