// move all the x at the end of the string using recursion
#include <bits/stdc++.h>
using namespace std;

string moveX(string str)
{
    if (str.size() == 0)
    {
        return "";
    }

    string ans = moveX(str.substr(1));

    if (str[0] == 'x')
    {
        return (ans + str[0]);
    }
    else
    {
        return (str[0] + ans);
    }
}

int main()
{
    string str = "abxasxasxjx";

    cout << moveX(str);
}