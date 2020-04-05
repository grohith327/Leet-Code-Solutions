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
    bool hasCycle(ListNode *head) {
        vector<ListNode *> visited;
        while(head)
        {
            for(auto x: visited)
            {
                if(x == head)
                {
                    return true;
                }
            }
            visited.push_back(head);
            head = head->next;
        }
        return false;
    }
};
