#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return fact(num - 1) * num;
    }
}

int main()
{
    cout << fact(5);
}