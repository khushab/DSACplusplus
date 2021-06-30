#include <iostream>
using namespace std;

int power(int num, int pow)
{
    if (pow == 1)
    {
        return num;
    }
    else
    {
        return power(num, pow - 1) * num;
    }
}

int main()
{
    int num = 2;
    int pow = 4;
    cout << power(num, pow) << endl;
}