class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int len = nums.size();
        map<int, int> count;
        
        for(int i = 0; i<len;i++)
        {
            if(count.find(nums[i]) == count.end())
            {
                count[nums[i]] = 1;
            }
            else
            {
                count[nums[i]] += 1;
                if(count[nums[i]] > int(len/2))
                {
                    break;
                }
            }
            
        }
        
        int max_val = -1;
        int maj_val;
        
        for(auto&x: count)
        {
            if(max_val < x.second)
            {
                max_val = x.second;
                maj_val = x.first;
            }
        }
        
        return maj_val;
    }
};
