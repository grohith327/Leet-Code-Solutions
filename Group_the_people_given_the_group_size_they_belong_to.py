class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        dict_ans = {}
        for i, val in enumerate(groupSizes):
            if(val not in dict_ans):
                dict_ans[val] = [i]
            else:
                dict_ans[val].append(i)
        ans = []
        for k,v in dict_ans.items():
            if(len(v) > k):
                for i in range(0, len(v), k):
                    ans.append(v[i:i+k])
                continue
            ans.append(v)
        return ans
                
                
