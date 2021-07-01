#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "13142924";
    sort(str.begin(), str.end(), greater<int>());
    cout << str;
}