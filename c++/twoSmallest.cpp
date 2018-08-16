#include <bits/stdc++.h>
using namespace std;

int SumOfSmallest(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }

    int res = arr[0] + arr[1];
    for (int i = 0; i < n - 1; i++)
    {
        res = max(res, arr[i] + arr[i + 1]);
    }
    return res;
}

//Main Driver
int main()
{
    int arr[] = {4,3, 1, 5, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << SumOfSmallest(arr, n) << endl;
    return 0;
}