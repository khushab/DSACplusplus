#include <iostream>
using namespace std;

int sum = 0;
void sumOfNatural(int num)
{
    if (num > 0)
    {
        sum = sum + num;
        sumOfNatural(num - 1);
    }
}

int main()
{
    int number = 5;
    sumOfNatural(number);
    cout << sum;
}