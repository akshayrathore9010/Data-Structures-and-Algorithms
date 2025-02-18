#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(string str, int i, string output, vector<string> &ans)
{

    if (i == str.length())
    {
        cout << output << " ";
        ans.push_back(output);
        return;
    }

    char ch = str[i];

    printSubsequence(str, i + 1, output + ch, ans);
    printSubsequence(str, i + 1, output, ans);
}

int main()
{

    string str = "abc";
    string output = "";
    int index = 0;

    vector<string> ans;
    printSubsequence(str, index, output, ans);
    puts("\nDone");
   
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}