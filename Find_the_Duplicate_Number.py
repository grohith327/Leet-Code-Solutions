class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        track = []
        for value in nums:
            if(value in track):
                return value
            track.append(value)
