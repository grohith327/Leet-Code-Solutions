class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n == 1)
        {
            return true;
        }
        
        while(n > 1)
        {
            if(n % 2 == 0)
            {
                n = n/2;
            }
            else
            {
                break;
            }
        }
        
        if(n == 1)
            return true;
        return false;
        
    }
};
