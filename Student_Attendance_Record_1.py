class Solution:
    def checkRecord(self, s: str) -> bool:
        a_count = 0
        for i, char in enumerate(s):
            if(char == 'A'):
                if(a_count == 1):
                    return False
                a_count += 1
            if(char == 'L' and i >= 2):
                if(s[i-1] == 'L' and s[i-2] == 'L'):
                    return False
        return True
                    
