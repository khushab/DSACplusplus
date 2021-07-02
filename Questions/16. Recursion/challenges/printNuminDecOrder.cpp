#include <bits/stdc++.h>
using namespace std;

void func(int num)
{
    if (num == 0)
    {
        cout << 0;
    }
    else
    {
        cout << num;
        func(num - 1);
    }
}

int main()
{
    // int num;
    // cout << "Enter the number" << endl;
    // cin >> num;

    func(5);
}