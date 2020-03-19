class Solution:
    def rotateString(self, A: str, B: str) -> bool:
        
        if(A == B):
            return True
        
        ans = False
        for i in range(1, len(A)):
            part1 = A[:i]
            part2 = A[i:]
            new_string = part2 + part1
            if(new_string == B):
                ans = True
                break
        return ans
        
