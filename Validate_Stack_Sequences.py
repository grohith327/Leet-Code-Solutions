class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack = []
        while(pushed):
            if(not stack):
                stack.append(pushed[0])
                pushed = pushed[1:]
                continue
            if(stack[-1] == popped[0]):
                stack = stack[:-1]
                popped = popped[1:]
            else:
                stack.append(pushed[0])
                pushed = pushed[1:]
        stack.reverse()
        if(stack == popped):
            return True
        return False
        
