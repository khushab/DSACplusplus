// print all subsequesce of letter from the two given keypads using recursion
#include <bits/stdc++.h>
using namespace std;

string keypadArray[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadComb(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    string code = keypadArray[ch - '0'];
    string ros = str.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypadComb(ros, ans + code[i]);
    }
}

int main()
{
    keypadComb("23", "");

    return 0;
}