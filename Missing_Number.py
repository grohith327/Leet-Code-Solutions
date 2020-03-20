class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        if(0 not in nums):
            return 0
        n = max(nums)
        ans = int((n * (n+1)) / 2) - sum(nums)
        if(ans == 0):
            return n+1
        return ans
