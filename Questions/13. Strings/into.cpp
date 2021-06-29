#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string str1(5, 'k');
    cout << str1 << endl;
    string str2 = "Khushab";
    cout << str2 << endl;

    //taking string input with spaces
    string str3;
    // getline(cin, str3);
    // cout << str3 << endl;

    //string concatenations
    string s1 = "khu";
    string s2 = "shab";
    // s1.append(s2);
    // cout << s1;
    cout << s1 + s2;

    //accessing chaarachters
    cout << s1[0] << endl;

    //to clear the string
    // s1.clear();

    //compare two string
    cout << s1.compare(s2) << endl;
    string s3 = "khu";
    if (s1.compare(s3) == 0)
    {
        cout << "strings are equal" << endl;
    }
    if (str3.empty())
    {
        cout << "string is empty" << endl;
    }

    string s4 = "hello";
    s4.erase(1, 2);
    cout << s4 << endl;

    return 0;
}