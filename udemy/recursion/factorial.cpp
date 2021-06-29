#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return fact(num - 1) * num;
    }
}

int factTwo(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    cout << fact(5) << endl;
    cout << factTwo(5);
}