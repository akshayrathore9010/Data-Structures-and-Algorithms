class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double currentSum = 0, maxSum;

      
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }

        maxSum = currentSum;

    
        for (int i = k; i < n; i++) {
            currentSum += nums[i] - nums[i - k]; 
            maxSum = max(maxSum, currentSum);  
        }
       
        return maxSum / k;
    }
};
