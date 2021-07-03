// replace pi with 4.14 in a string
#include <bits/stdc++.h>
using namespace std;

string pi = "3.14";
void replacePi(string str, int start)
{
    if (str[start] == '\0' || str[start + 1] == '\0')
    {
        cout << str;
        return;
    }
    if (str[start] == 'p' && str[start + 1] == 'i')
    {
        str.erase(start, 2);
        str.insert(start, pi);
    }
    replacePi(str, start + 1);
}

int main()
{
    string str = "pippxppixipi";
    replacePi(str, 0);
}