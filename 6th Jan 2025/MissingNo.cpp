class Solution {
public:
    int missingNumber(vector<int>& nums) {

     int n = nums.size();

     int sum = (n*(n+1))/2;
     int currSum = 0;
     for(int i=0;i<n;i++)
     {
        currSum+=nums[i];
     }

     return sum - currSum;   

    }
};