class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if(not s):
            return 0
        max_len = 1
        string = list(s)
        for i in range(len(string)-1):
            alpha = []
            for k in range(128):
                alpha.append(0)
            alpha[ord(string[i])] = 1
            temp_len = 1
            for j in range(i+1, len(string)):
                if(alpha[ord(string[j])] != 0):
                    break
                alpha[ord(string[j])] = 1
                temp_len += 1
            if(temp_len > max_len):
                max_len = temp_len
        return max_len
