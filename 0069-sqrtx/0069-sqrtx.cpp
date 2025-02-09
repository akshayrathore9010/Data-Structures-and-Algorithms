class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid;
        int ans = -1;

        while (s <= e) {
            mid = s + (e - s) / 2;
            long long int prod = mid * mid;

            if (prod == x) {
                return mid; 
            } else if (prod < x) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};
