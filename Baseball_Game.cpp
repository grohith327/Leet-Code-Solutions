class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        int sum = 0;
        vector<int> nums;
        for(int i = 0;i<ops.size();i++)
        {
            if(ops[i] == "C")
            {
                sum -= nums[nums.size() - 1];
                nums.pop_back();
            }
            
            else if(ops[i] == "+")
            {
                sum += nums[nums.size() - 1] + nums[nums.size() - 2];
                nums.push_back(nums[nums.size() - 1] + nums[nums.size() - 2]);
            }
            
            else if(ops[i] == "D")
            {
                sum += nums[nums.size() - 1] * 2;
                nums.push_back(nums[nums.size() - 1] * 2);
            }
            
            else
            {
                nums.push_back(stoi(ops[i]));
                sum += stoi(ops[i]);
            }
        }
        cout<<sum;
        return sum;
        
    }
};
