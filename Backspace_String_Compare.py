class Solution:
    
    def norm_string(self, s:str) -> str:
        
        new_str = []
        for char in s:
            if(char != '#'):
                new_str.append(char)
            else:
                if(new_str):
                    new_str = new_str[:-1]
        return ''.join(new_str)
        
    def backspaceCompare(self, S: str, T: str) -> bool:
        if(self.norm_string(S) == self.norm_string(T)):
            return True
        return False
