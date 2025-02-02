#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort the array to make it easier to avoid duplicates and use two-pointer technique
        sort(nums.begin(), nums.end());
        
        // Use a set to store unique triplets
        set<vector<int>> uniqueTriplets;
        vector<vector<int>> ans;

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate elements to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Initialize two pointers
            int left = i + 1;
            int right = nums.size() - 1;

            // Use two-pointer technique to find triplets that sum to zero
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    // If the sum is zero, add the triplet to the set
                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--; 
                } else if (sum < 0) {
                    // If the sum is less than zero, move the left pointer to the right
                    left++;
                } else {
                    // If the sum is greater than zero, move the right pointer to the left
                    right--;
                }
            }
        }

        // Convert the set of unique triplets to a vector
        for (auto triplet : uniqueTriplets) {
            ans.push_back(triplet);
        }

        return ans;
    }
};

int main() {
    // Example input
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);

    // Print the result
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
