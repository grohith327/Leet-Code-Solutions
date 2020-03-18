class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = NULL;
        temp = head;
        while(1)
        {
            if(temp->next == NULL)
                break;
            temp = temp->next;
            count++;
        }
        count++;
        ListNode* first = NULL;
        ListNode* second = NULL;
        first = head;
        second = head->next;
        int pos = count - n;
        if(pos == 0)
        {
            head = second;
            // free(first);
            return head;
        }
        for(int i=0;i<pos-1;i++)
        {
            first = second;
            second = second->next;
        }
        // cout<<first->val<<' '<<second->val;
        first->next = second->next;
        // free(second);
        return head;
    }
};
