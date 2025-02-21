#include <iostream>
using namespace std;

void printPermutation(string &str, int i) {
    // Base case: if the current index is greater than or equal to the length of the string
    if (i >= str.length()) {
        cout << str << endl; // Print the permutation
        return;
    }

    // Recursive case: give each element a chance to be at the current index
    for (int j = i; j < str.length(); j++) {
        // Swap the current element with the element at the current index
        swap(str[i], str[j]);
        // Recursively call the function for the next index
        printPermutation(str, i + 1);
        // Swap back to restore the original string (backtracking)
        swap(str[i], str[j]);
    }
}

int main() {
    string str = "abc"; // Input string
    int i = 0; // Starting index
    printPermutation(str, i); // Call the function to print all permutations

    return 0;
}