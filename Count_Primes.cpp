class Solution {
public:
    
    bool checkPrime(int n)
    {
        int num = floor(pow(n, 0.5));
        for(int i= 2;i<=num;i++)
        {
            if(n % i  == 0)
            {
                return false;
            }
        }
        return true;
    }
    
    int countPrimes(int n) {
        if(n <= 2)
            return 0;
        int count = 0;
        for(int val = 2; val <n; val++)
        {
            if(checkPrime(val))
            {
                count++;
            }
        }
        return count;
    }
};
