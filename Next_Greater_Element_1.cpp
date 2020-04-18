class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i< nums1.size(); i++)
        {
            int flag = -1;
            int found = -1;
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums2[j] > nums1[i] && found == 1)
                {
                    ans.push_back(nums2[j]);
                    flag = 1;
                    break;
                }
                
                if(nums2[j] == nums1[i])
                    found = 1;
            }
            if(flag == -1)
            {
                ans.push_back(-1);
            }
        }
        
        return ans;
    }
};
