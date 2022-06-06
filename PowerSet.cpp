#include <bits/stdc++.h>

void gen(vector<int> v, vector<vector<int>> &ans, vector<int> temp, int index)
{
    if (index >= v.size())
    {
        sort(temp.begin(), temp.end());
        ans.push_back(temp);
        return;
    }
    temp.push_back(v[index]);
    gen(v, ans, temp, index + 1);
    temp.pop_back();
    gen(v, ans, temp, index + 1);
}

vector<vector<int>> pwset(vector<int> v)
{
    vector<vector<int>> ans;
    vector<int> temp;
    gen(v, ans, temp, 0);
    return ans;
}