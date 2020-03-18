# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        l1_arr = []
        l2_arr = []
        
        while(True):
            l1_arr.append(l1.val)
            if(l1.next == None):
                break
            l1 = l1.next
            
        while(True):
            l2_arr.append(l2.val)
            if(l2.next == None):
                break
            l2 = l2.next
            
        l1_arr.reverse()
        l2_arr.reverse()
        
        l1_arr = list(map(str, l1_arr))
        l2_arr = list(map(str, l2_arr))
            
        l1_num = ''
        for val in l1_arr:
            l1_num += val
        l1_num = int(l1_num)
        
        l2_num = ''
        for val in l2_arr:
            l2_num += val
        l2_num = int(l2_num)
        
        total = l1_num + l2_num
        
        total = list(str(total))
        total.reverse()
        
        l_obj = []
        for val in total:
            l_obj.append(ListNode(val))
        
        for i in range(len(l_obj)-1):
            l_obj[i].next = l_obj[i+1]
        
        return l_obj[0]
