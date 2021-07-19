#include <bits/stdc++.h>
using namespace std;

int arraySubsequence(int i, vector<int> vec, int sum)
{
    if (i == vec.size())
    {
        if (sum == 0)
        {
            return 1;
        }

        return 0;
    }
    int first = 0;
    int sec = 0;

    if (vec[i] <= sum)
    {
        sum = sum - vec[i];
        first = arraySubsequence(i, vec, sum);
        sum = sum + vec[i];
    }
    sec = arraySubsequence(i + 1, vec, sum);

    return first + sec;
}

int main()
{
    vector<int> myvec = {1, 2, 3};
    vector<int> newVec;
    cout << arraySubsequence(0, myvec, 5);
}

// for (auto it : vec)
//     {
//         if (it == a)
//         {
//             int res = 4 / a;
//             cout << 4 << " << ";
//             for (int i = 0; i < res; i++)
//             {
//                 cout << a << " ";
//             }
//             cout << endl;
//         }
//     }