
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>> uniqueTriplets;
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {
            
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        for (auto triplet : uniqueTriplets) {
            ans.push_back(triplet);
        }

        return ans;
    }
};