class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> ans(n);
        for (int i = 0; i < k; i++) {
            ans[i] = nums[n - k + i];
        }
        for (int i = 0; i < n - k; i++) {
            ans[k + i] = nums[i];
        }
        nums = ans;
    }
};
