//  Remove duplicates from the given string
#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string str)
{
    if (str.size() == 0)
    {
        return "";
    }

    char ch = str[0];

    string ans = removeDuplicate(str.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    string str = "aaabbbccc";
    cout << removeDuplicate(str);
}