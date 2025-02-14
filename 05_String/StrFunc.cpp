#include <iostream>
using namespace std;
int main()
{

    string name = "Akshay Rathore";
    // cout << name[0] << endl;
    // cout << name.at(0) << endl;

    // cout << name.front() << endl;
    // cout << name.back() << endl;
    // cout << name.length() << endl;

    auto it = name.begin();

    while (it != name.end())
    {
        cout << *it++ << " ";
    }
    cout << endl;

    if (name.empty())
        puts("Empty");
    else
        puts("Not Empty");

    return 0;
}