class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int rem = target-nums[i];
            if(mp.find(rem) != mp.end())
            {
                return {i,mp[rem]};
            }
              mp[nums[i]] = i;
        }
        
        return {};

    }
};

// Brute Force
// class Solution {
// public:
//    vector<int> twoSum(std::vector<int>& nums, int target) {
//         vector<int> ans;
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] + nums[j] == target) {
//                     vector<int> temp;
//                     temp.push_back(min(i,j));
//                     temp.push_back(max(i,j));
//                     ans = temp;  
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };