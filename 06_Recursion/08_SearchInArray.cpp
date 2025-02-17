#include <iostream>
using namespace std;

pair<int, int> searchInArray(int arr[], int size, int index, int target) {
    pair<int, int> p = {-1, -1};

    // Base case
    if (index == size)
        return p;
    if (arr[index] == target) { 
        p.first = index;
        p.second = target;
        return p;
    }

    pair<int, int> pp = searchInArray(arr, size, index + 1, target);
    return pp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    pair<int, int> result = searchInArray(arr, size, 0, target);
    if (result.first != -1) {
        cout << "Element " << result.second << " found at index " << result.first << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}