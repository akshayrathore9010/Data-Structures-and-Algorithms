#include <iostream>

using namespace std;

void printData(void* ptr, char dataType) {
    if (dataType == 'i') { // Integer
        int* intPtr = static_cast<int*>(ptr);
        cout << "Integer value: " << *intPtr << endl;
    } else if (dataType == 'f') { // Float
        float* floatPtr = static_cast<float*>(ptr);
        cout << "Float value: " << *floatPtr << endl;
    } else if (dataType == 'c') { // Character
        char* charPtr = static_cast<char*>(ptr);
        cout << "Character value: " << *charPtr << endl;
    } else {
        cout << "Unsupported data type." << endl;
    }
}

int main() {
    int intVar = 10;
    float floatVar = 3.14f;
    char charVar = 'A';

    void* voidPtr;

    // Assigning addresses to void pointer and printing data
    voidPtr = &intVar;
    printData(voidPtr, 'i');

    voidPtr = &floatVar;
    printData(voidPtr, 'f');

    voidPtr = &charVar;
    printData(voidPtr, 'c');

    return 0;
}
