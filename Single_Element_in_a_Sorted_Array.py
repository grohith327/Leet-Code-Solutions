class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if(len(nums) == 1):
            return nums[0]
        i = 0
        while(i < len(nums)):
            try:
                if(nums[i]^nums[i+1] != 0):
                    return nums[i]
            except IndexError:
                return nums[-1]
            i += 2
        
