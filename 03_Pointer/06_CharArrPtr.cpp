#include <iostream>
using namespace std;

int main()
{
    // Declare a character array and a pointer to the first element of the array
    char name[10] = "Sherbano";
    char *c = &name[0];

    // Print the character array and various pointer-related information
    cout << name << endl
         // Prints the entire string "Sherbano"
         << &name << endl
         // Prints the address of the array 'name'
         << *(name + 3) << endl
         // Prints the character at index 3, which is 'r'
         << c << endl
         // Prints the entire string "Sherbano" (pointer to the first element)
         << &c << endl
         // Prints the address of the pointer 'c'
         << *(c + 3) << endl
         // Prints the character at index 3, which is 'r'
         << c + 2 << endl
         // Prints the string starting from index 2, which is "erbano"
         << *c << endl
         // Prints the first character of the string, which is 'S'
         << c + 8 << endl;
    // Prints the string starting from index 8, which is "o"

    // Declare a character variable and a pointer to it
    char cc = 'A';
    char *ct = &cc;
    cout << ct << endl; // Prints the string starting from the address of 'cc', which may result in undefined behavior

    // Declare a character array and a pointer to a string literal
    char naam[10] = "Akshay";
    char *c1 = "Akshay";

    // Print the character array and the string literal
    cout << naam << endl // Prints the entire string "Akshay"
         << c1 << endl;  // Prints the entire string "Akshay"

    return 0;
}