// std::weak_ptr is a smart pointer that provides non-owning, weak references to objects managed by std::shared_ptr.
// It allows observing an object without affecting its lifetime, preventing strong reference cycles and memory leaks.

#include <iostream>
#include <memory>
using namespace std;

class Resource
{
public:
    Resource() { cout << "Resource acquired\n"; }
    ~Resource() { cout << "Resource destroyed\n"; }
    void print() { cout << "Resource is accessible\n"; }
};

int main()
{

    // Create a shared_ptr using std::make_shared
    auto sharedPtr = make_shared<Resource>();

    // Create a weak_ptr from the shared_ptr
    weak_ptr<Resource> weakPtr = sharedPtr;

    // Check if the referenced object is still valid
    if (!weakPtr.expired())
    {
        cout << "Referenced object is still valid.\n";

        // Convert weak_ptr to shared_ptr to access the object
        auto sharedPtrCopy = weakPtr.lock();

        if (sharedPtrCopy)
        {
            cout << "Accessing the resource...\n";
            sharedPtrCopy->print();
        }
        else
        {
            cout << "Referenced object has been deleted.\n";
        }
    }
    else
    {
        cout << "Referenced object has been deleted.\n";
    }
    return 0;
}