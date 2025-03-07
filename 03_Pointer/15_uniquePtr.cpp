#include <iostream>
#include <memory>
using namespace std;

class uniquePtr
{
public:
    uniquePtr() { puts("Object Created"); }
    ~uniquePtr() { puts("Object Destroyed"); }
    void hello() { puts("Hello Broooo"); }
};

int main()
{

    // unique_ptr is a smart pointer that owns and manages another object via a pointer
    // t disposes of the object when it goes out of scope.
    unique_ptr<uniquePtr> ptr(new uniquePtr());

    // Accessing the object managed by unique_ptr
    // Use the dereference operator (*) to access the object.
    ptr->hello();

    // Attempting to copy a unique_ptr will result in a compile-time error.
    // This is because unique_ptr does not support copying; it supports moving instead.
    // unique_ptr<uniquePtr> ptr2 = ptr; // This line will cause a compile error.

    // Moving ownership of the object to another unique_ptr
    // Use move() to transfer ownership from one unique_ptr to another.
    unique_ptr<uniquePtr> ptr2 = move(ptr);

    // After moving, ptr is reset to nullptr.
    if (!ptr)
    {
        cout << "ptr is now nullptr.\n";
    }

    // ptr2 now owns the object.
    if (ptr2)
    {
        ptr2->hello();
    }

    // Releasing ownership of the object
    // Use release() to release ownership without deleting the object.
    uniquePtr *rawPtr = ptr2.release();

    // Manually deleting the object
    // This is necessary if you release ownership without letting unique_ptr handle it.
    delete rawPtr;

    return 0;
}