class Solution:
    def minSteps(self, n: int) -> int:
        num_a = 1
        steps = 0
        last_copy_len = -1
        while(num_a < n):
            if(n % num_a == 0):
                last_copy_len = num_a
                num_a *= 2
                steps += 2 
                continue
            num_a += last_copy_len
            steps += 1
        return steps
