class Solution {
  public:
    bool armstrongNumber(int n) {
       
       int ans = 0;
       int actual = n;
       while(n)
       {
           int val = n % 10;
           ans += pow(val,3);
           n = n/10;
       }
       
       if(ans == actual) return true;
       return false;
    }
};