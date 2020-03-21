class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        prof = 0
        for i in range(len(prices)-1):
            curr_prof = max(prices[i+1:]) - prices[i]
            if(curr_prof > prof):
                prof = curr_prof
        return prof
