# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        n = 0
        count_head = head
        while(count_head is not None):
            n += 1
            count_head = count_head.next
        if(n == 0 or n == 1):
            return head
        rot_pos = n - (k % n)
        ptr_1 = head
        ptr_2 = head.next
        count = 1
        if(rot_pos == n):
            return head
        while(count < rot_pos):
            count += 1
            ptr_1 = ptr_1.next
            ptr_2 = ptr_2.next
        ptr_1.next = None
        temp = ptr_2
        while(ptr_2.next is not None):
            ptr_2 = ptr_2.next
        ptr_2.next = head
        head = temp
        return head
