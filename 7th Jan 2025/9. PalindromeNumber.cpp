class Solution {
public:
    bool isPalindrome(int x) {
        long long ans = 0;
        int num = x;

        if(x<0)
        {
            return false;
        }

        while(x)
        {
            int digit = x%10;
            ans = digit+ans*10;
            x = x/10;
        }
        if(num == ans)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};