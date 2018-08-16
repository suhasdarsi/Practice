#include <bits/stdc++.h>

using namespace std;

int getMaxLength(int arr[], int n)
{
    int result = 0;
    int counter = 0;

    for (int i; i < n; i++)
    {
        if (arr[i] == 0)
        {
            counter = 0;
        }
        else
        {
            counter++;
            result = max(result, counter);
        }
    }
    return result;
}

//Main Driver

int main()
{
    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getMaxLength(arr, n) << endl;
    return 0;
}