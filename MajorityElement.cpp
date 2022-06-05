#include <bits/stdc++.h>
using namespace std;

// Using Morris Voting Algorithm
int findMajorityElement(int arr[], int n)
{
    int candidate = arr[0];
    int votes = 1, f = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == candidate)
            votes++;
        else
            votes--;
        if (votes == 0)
        {
            candidate = arr[i];
            votes = 1;
        }
    }
    for (int i = 0; i < n; i++)
        if (arr[i] == candidate)
            f++;
    if (f > n / 2)
        return candidate;
    return -1;
}