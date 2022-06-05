#include <bits/stdc++.h>
using namespace std;

int uniqueElement(vector<int> arr, int n)
{
    if (n == 0)
    {
        return -1;
    }
    if (n == 1)
    {
        return arr[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
        if ((arr[i] != arr[i + 1]) && (arr[i + 1] != arr[i + 2]))
        {
            return arr[i + 1];
        }
    }
    return -1;
}
