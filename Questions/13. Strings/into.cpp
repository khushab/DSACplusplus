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

    //find a substring in a string
    string s5 = "Khshab";
    cout << s5.find("sha") << endl;

    //insert in string
    s5.insert(2, "u");
    cout << s5 << endl;

    //find size
    cout << s5.size() << endl;
    cout << s5.length() << endl;

    //substring
    string s = s5.substr(1, 4);
    cout << s << endl;

    //strnig to integer
    string numString = "123";
    int x = stoi(numString);
    cout << x + 2 << endl;

    //integer to string
    cout << to_string(x) + "2" << endl;

    //sort string
    string unsorted = "asrerfsfnoqkpwkeqas";
    sort(unsorted.begin(), unsorted.end());
    cout << unsorted << endl;

    return 0;
}