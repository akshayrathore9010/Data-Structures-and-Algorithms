#include <iostream>

// Example 1: Freeing memory while a pointer still points to it
void demonstrateDanglingPointer() {
    int* p = new int;
    *p = 42;
    std::cout << "Value before deletion: " << *p << std::endl;
    
    delete p; // Free the memory
    // p is now a dangling pointer
    
    // Avoid using p after deletion
    std::cout << *p << std::endl; // This would cause undefined behavior
    
    // Best practice: Set the pointer to nullptr after deletion
    p = nullptr;
    
    if (p != nullptr) {
        std::cout << "Pointer is not null." << std::endl;
    } else {
        std::cout << "Pointer is null." << std::endl;
    }
}

// Example 2: Returning a pointer to a local variable
int* returnLocalPointer() {
    int num = 1234; // Local variable
    return &num; // Returns a dangling pointer
}

// Example 3: Using smart pointers to avoid dangling pointers
#include <memory>

void demonstrateSmartPointer() {
    std::unique_ptr<int> smartPtr(new int(10));
    std::cout << "Value using smart pointer: " << *smartPtr << std::endl;
    
    // No need to manually delete; smartPtr will handle it
}

int main() {
    // demonstrateDanglingPointer();
    
    // Example 2: Avoid using returnLocalPointer() as it returns a dangling pointer
    // int* ptr = returnLocalPointer();
    // std::cout << *ptr << std::endl; // This would cause undefined behavior
    
    demonstrateSmartPointer();
    
    return 0;
}
