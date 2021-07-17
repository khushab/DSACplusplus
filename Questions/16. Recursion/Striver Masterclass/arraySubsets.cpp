#include <bits/stdc++.h>
using namespace std;

void arraySubsequence(int i, vector<int> vec, vector<int> curr)
{
    if (i == vec.size())
    {
        for (auto it : curr)
        {
            cout << it;
        }
        cout << endl;
        return;
    }

    curr.push_back(vec[i]);
    arraySubsequence(i + 1, vec, curr);

    curr.pop_back();
    arraySubsequence(i + 1, vec, curr);
}

int main()
{
    vector<int> myvec = {1, 2, 3};
    vector<int> newVec;
    arraySubsequence(0, myvec, newVec);
}