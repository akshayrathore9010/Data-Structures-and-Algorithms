class Solution {
public:
    int firstOccurrence(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0, e = n - 1, mid;
        int ansIndex = -1;

        while (s <= e) {
            mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                ansIndex = mid;
                e = mid - 1;
            } else if (target > arr[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ansIndex;
    }

    int lastOccurrence(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0, e = n - 1, mid;
        int ansIndex = -1;

        while (s <= e) {
            mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                ansIndex = mid;
                s = mid + 1;
            } else if (target > arr[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ansIndex;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        result[0] = firstOccurrence(nums, target);
        result[1] = lastOccurrence(nums, target);
        return result;
    }
};
