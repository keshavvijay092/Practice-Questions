class Solution {
public:
    int Solve(int n,vector<int>&dp)
    {
        if(n == 0 || n == 1)
        {
           return n;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }

        return dp[n] = Solve(n-1,dp)+Solve(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);

        int ans = Solve(n,dp);
        return ans;
    }
};