# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if(not head):
            return head
        temp = head
        q1 = []
        q2 = []
        flag = 1
        while(temp is not None):
            if(flag == 1):
                q1.append(ListNode(temp.val))
                flag = 2
                temp = temp.next
                continue
            if(flag == 2):
                q2.append(ListNode(temp.val))
                flag = 1
                temp = temp.next
        if(len(q2) == 0):
            return head
        new_head = ListNode(q2[0].val)
        q2 = q2[1:]
        temp = new_head
        flag = 1
        while(len(q2) > 0 and len(q1) > 0):
            if(flag == 1):
                temp.next = q1[0]
                temp = q1[0]
                q1 = q1[1:]
                flag = 2
                continue
            if(flag == 2):
                temp.next = q2[0]
                temp = q2[0]
                q2 = q2[1:]
                flag = 1
        while(len(q1) > 0):
            temp.next = q1[0]
            temp = q1[0]
            q1 = q1[1:]
        return new_head
