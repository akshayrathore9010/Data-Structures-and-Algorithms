#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(int arr[], int n, int brr[], int m, vector<int> &ans)
{

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }

    while (i < n)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(brr[j]);
        j++;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50,58};
    int sizeArr = 6;

    int brr[] = {15, 25, 35, 45, 55,60};
    int sizeBrr = 6;

    vector<int> ans;
    mergeSortedArray(arr, sizeArr, brr, sizeBrr, ans);

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}