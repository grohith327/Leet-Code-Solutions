class Solution {
public:
    int sumofDigits(int n)
    {
        vector<int> digits;
        while(n > 0)
        {
            digits.push_back(n % 10);
            n /= 10;
        }
        return accumulate(digits.begin(), digits.end(), 0);
    }
    
    int checkEven(int n)
    {
        if(n % 2 == 0)
            return 1;
        return 0;
    }
    
    int sumOfDigits(vector<int>& A) {
        int min = INT_MAX;
        for(auto x: A)
        {
            if(min > x)
                min = x;
        }
        return checkEven(sumofDigits(min));
    }
};
