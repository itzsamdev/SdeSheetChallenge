#include <bits/stdc++.h>
using namespace std;

void generate(string s, vector<string> &ans, int index)
{
    if (index == s.length())
    {
        ans.push_back(s);
    }
    for (int i = index; i < s.length(); i++)
    {
        swap(s[i], s[index]);
        generate(s, ans, index + 1);
        swap(s[i], s[index]);
    }
}

vector<string> findPermutations(string &s)
{
    vector<string> ans;
    generate(s, ans, 0);
    return ans;
}