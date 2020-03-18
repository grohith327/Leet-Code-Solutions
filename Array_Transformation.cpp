class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        
        vector<int> prev_arr = arr;
        while(true)
        {
            map<int, int> changes;
            for(int i = 1;i<arr.size()-1;i++)
            {
                if(arr[i-1] > arr[i] && arr[i+1] > arr[i])
                {
                    changes[i] = 1;
                }
                
                if(arr[i-1] < arr[i] && arr[i+1] < arr[i])
                {
                    changes[i] = -1;
                }
            }
            
            for(auto&x: changes)
            {
                arr[x.first] += x.second;
            }
            
            if(prev_arr == arr)
            {
                break;
            }
            
            prev_arr = arr;
        }
        
        return arr;
    }
};
