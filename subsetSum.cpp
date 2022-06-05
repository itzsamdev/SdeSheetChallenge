#include <bits/stdc++.h>
using namespace std;

void gen(vector<int> &num, vector<int> temp, vector<int> &res, int index)
{
    if (index >= num.size())
    {
        int sum = 0;
        for (auto it : temp)
        {
            sum += it;
        }
        res.push_back(sum);
        return;
    }
    gen(num, temp, res, index + 1);
    temp.push_back(num[index]);
    gen(num, temp, res, index + 1);
    temp.pop_back();
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> temp;
    vector<int> res;
    gen(num, temp, res, 0);
    sort(res.begin(), res.end());
    return res;
}