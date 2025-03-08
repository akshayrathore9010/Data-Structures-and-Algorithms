// shared_ptr is a smart pointer that manages the lifetime of an object via shared ownership.
// It maintains a reference count to track how many shared pointers are pointing to the same object.

#include <iostream>
#include <memory>
using namespace std;

class Ex
{
public:
    Ex() { cout << "Created" << endl; }
    ~Ex() { cout << "Deleted" << endl; }
    void print() { cout << "Helloo theree" << endl; }
};

int main()
{

    // Create a shared_ptr using std::make_shared, which is the recommended method.
    // This avoids double memory allocation and is exception-safe.
    auto ptr1 = make_shared<Ex>();

    cout << "Ex count of ptr1 : " << ptr1.use_count() << endl;

    // Create another shared_ptr by copying ptr1. This increments the Ex count.
    auto ptr2 = ptr1;

    cout << "Ex count after copying: " << ptr1.use_count() << endl;

    // Access the Ex through ptr2
    ptr2->print();

    cout << "Reference count after accessing: " << ptr1.use_count() << endl;
    // ptr2 goes out of scope here, but nothing happens because ptr1 still exists
    return 0;
}

// Important notes:
// - Avoid creating a shared_ptr from a raw pointer directly, as this can lead to double deletion issues.
// - Use std::make_shared instead of std::shared_ptr(new Resource()) for efficiency and safety.
// - std::shared_ptr is more memory-intensive than std::unique_ptr. Use it only when shared ownership is necessary.
