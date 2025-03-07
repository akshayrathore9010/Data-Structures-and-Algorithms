#include <iostream>

void demonstrateWildPointer()
{
    // Example 1: Uninitialized Pointer
    int *uninitializedPtr;                       // Uninitialized pointer
    std::cout << *uninitializedPtr << std::endl; // Uncommenting this line will cause undefined behavior

    // Example 2: Deleted Pointer
    int *deletedPtr = new int(10);         // Allocate memory
    delete deletedPtr;                     // Deallocate memory
    std::cout << *deletedPtr << std::endl; // Uncommenting this line will cause undefined behavior

    // Example 3: Pointer to Non-Existent Variable
    int x;                                     // Uncommenting this line will make the next line valid
    int *nonExistentPtr = &x;                  // This would be valid if 'x' is declared
    std::cout << *nonExistentPtr << std::endl; // Uncommenting this line will cause undefined behavior if 'x' is not declared

    // Best Practices to Avoid Wild Pointers
    // int *safePtr = nullptr; // Initialize to nullptr
    // if (safePtr != nullptr) {
    //     std::cout << *safePtr << std::endl; // Safe dereference
    // } else {
    //     std::cout << "Pointer is null." << std::endl;
    // }

    // Allocate memory safely
    // safePtr = new int(20);
    // std::cout << "Value pointed by safePtr: " << *safePtr << std::endl; // Valid dereference

    // delete safePtr; // Deallocate memory
    // safePtr = nullptr; // Set to nullptr after deletion
}

int main()
{
    demonstrateWildPointer();

    return 0;
}
