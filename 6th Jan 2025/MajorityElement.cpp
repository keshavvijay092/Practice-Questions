class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int element = nums[0];
        int cnt =1;

        for(int i=1;i<n;i++)
        {
            if(element == nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }

            if(cnt == 0)
            {
                element = nums[i];
                cnt = 1;
            }
        }
        int cnt2 = 0;
        for(int i=0;i<n;i++)
        {
           if(element == nums[i])
           {
            cnt2++;
           }
        }
   
        if(cnt2 >= n/2) return element;
        else return -1;
    }
};