#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   
    int arr[] = {10,20,30,40,50};
    int n =5;
    int t = 50;

    bool ans = binary_search(arr,arr+n,t);
    cout<<ans;
   
return 0;
}