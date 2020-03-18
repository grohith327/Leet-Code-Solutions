class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())
        {
            return s;
        }
        int start, end;
        start = 0;
        end = 0;
        for(int i=0;i<s.length();i++)
        {
            int len1 = expand(s, i, i);
            int len2 = expand(s, i, i+1);
            // int len = max(len1, len2);
            if(len1 > end-start)
            {
                start = i - len1/2;
                end = i + len1/2;
            }
            if(len2 > end-start)
            {
                start = i+1-len2/2;
                end = i+len2/2;
            }
        }
        
        return s.substr(start, end-start+1);
    }
    
    int expand(string s, int l, int r)
    {
        int Left = l;
        int Right = r;
        while(Left >=0 && Right < s.length() && s.at(Left) == s.at(Right))
        {
            Left--;
            Right++;
        }
        
        return Right - Left - 1;
    }
};
