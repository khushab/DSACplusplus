// Generate all the substrigs of a given string
#include <bits/stdc++.h>
using namespace std;

void subStrings(string str, int i, string cur)
{
    if (i == str.length())
    {
        cout << cur << endl;
        return;
    }

    subStrings(str, i + 1, cur + str[i]);
    subStrings(str, i + 1, cur);
}

int main()
{
    string str = "ABC";
    subStrings(str, 0, "");
}