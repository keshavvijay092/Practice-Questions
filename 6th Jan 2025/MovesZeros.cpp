class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[cnt] = nums[i];
                cnt++;
            }
        }

        while(cnt<n)
        {
            nums[cnt] = 0;
            cnt++;
        }
        return ;
    }
};