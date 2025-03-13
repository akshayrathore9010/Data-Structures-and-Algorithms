
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;

      
        for (int current = 0; current < nums.size(); current++) {
            if (nums[current] != 0) {
                
                swap(nums[current], nums[lastNonZeroFoundAt]);
                lastNonZeroFoundAt++;
            }
        }
    }
};