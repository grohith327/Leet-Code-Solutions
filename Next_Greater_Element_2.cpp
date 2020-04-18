class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++)
        {
            int rpos = i+1;
            int lpos = 0;
            int greaterNum = INT_MIN;
            while(rpos < nums.size())
            {
                if(nums[rpos] > nums[i])
                {
                    greaterNum = nums[rpos];
                    break;
                }
                rpos++;
            }
            if(greaterNum > INT_MIN)
            {
                ans.push_back(greaterNum);
                continue;
            }
            while(lpos < i)
            {
                if(nums[lpos] > nums[i])
                {
                    greaterNum = nums[lpos];
                    break;
                }
                lpos++;
            }
            if(greaterNum == INT_MIN)
            {
                ans.push_back(-1);
                continue;
            }
            ans.push_back(greaterNum);
        }
        return ans;
    }
};
