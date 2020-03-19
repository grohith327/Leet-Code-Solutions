class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dict_count = {}
        for val in nums:
            if(val in dict_count):
                dict_count[val] += 1
            else:
                dict_count[val] = 1
        for k,v in dict_count.items():
            if(v == 1):
                return k
        
