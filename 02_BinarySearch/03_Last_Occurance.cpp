#include <iostream>
#include <vector>

using namespace std;

int firstOccurrence(vector<int>& arr, int target) {
    int n = arr.size();
    int s = 0, e = n - 1, mid;
    int ansIndex = -1;

    while (s <= e) {
        mid = (s + e) / 2;

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

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;
    int result = firstOccurrence(arr, target);
    if (result != -1) {
        cout << "Last occurrence of element " << target << " is at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}