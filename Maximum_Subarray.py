class Solution:
        
    def maxSubArray(self, nums: List[int]) -> int:
        max_tot = nums[0]
        for i in range(1, len(nums)):
            if(nums[i-1] > 0):
                nums[i] += nums[i-1]
            if(max_tot < nums[i]):
                max_tot = nums[i]
        return max_tot
