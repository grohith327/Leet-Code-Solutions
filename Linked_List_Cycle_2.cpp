/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode *> visited;
        while(head)
        {
            for(auto x: visited)
            {
                if(x == head)
                {
                    return head;
                }
            }
            visited.push_back(head);
            head = head->next;
        }
        return NULL;
    }
};
