#include <bits/stdc++.h>
using namespace std;

void wavePrint(vector<vector<int>> &v)
{
    int row = v.size();
    int col = v[0].size();

    for (int sCol = 0; sCol < col; sCol++)
    {
        if ((sCol & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << v[i][sCol] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << v[i][sCol] << " ";
            }
        }
    }
}

int main()
{

    vector<vector<int>> v{
        {1, 2, 3, 4, 5},
        {5, 10, 15, 20, 25},
        {10, 20, 30, 40, 50}};

    wavePrint(v);

    return 0;
}