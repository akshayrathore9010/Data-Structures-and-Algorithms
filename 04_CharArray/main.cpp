#include <iostream>
using namespace std;

int main() {
    // creation
    char arr[100]; // Declare a character array of size 100

    puts("Enter your name : "); // Prompt the user to enter their name

    // input
    // cin >> arr; // This would read input until the first whitespace character
    // cin.getline(arr, 100); // This would read up to 100 characters or until a newline character is encountered

    // Using cin.getline to read input
    cin.getline(arr, 85, '\t'); // Read up to 85 characters or until a tab character is encountered

    // print
    cout << "Your name is : " << arr << endl; // Print the entered name

    // Uncomment the following lines to print each character and its ASCII value
    // cout << arr[0] << "-> " << (int)arr[0] << endl;
    // cout << arr[1] << "-> " << (int)arr[1] << endl;
    // cout << arr[2] << "-> " << (int)arr[2] << endl;
    // cout << arr[3] << "-> " << (int)arr[3] << endl;
    // cout << arr[4] << "-> " << (int)arr[4] << endl;
    // cout << arr[5] << "-> " << (int)arr[5] << endl;
    // cout << arr[6] << "-> " << (int)arr[6] << endl;

    return 0;
}