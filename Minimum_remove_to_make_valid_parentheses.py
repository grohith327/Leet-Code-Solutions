class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        stack = []
        del_items = []
        for i, char in enumerate(s):
            if((not stack) and char == ')'):
                del_items.append(i)
                continue
            if(char == '('):
                stack.append(i)
            if(char == ')'):
                stack.pop()
        del_items = del_items + stack
        del_items.sort()
        if(del_items):
            count = 0
            for index in del_items:
                pos = index - count
                s = s[:pos] + s[pos+1:]
                count += 1
        return s
