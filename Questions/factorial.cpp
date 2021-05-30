#include <iostream>
using namespace std;

int factorial(int number)
{

    int fact = 1;
    for (int i = 2; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{

    int n;

    cout << "Enter the number\n";
    cin >> n;

    int result = factorial(n);

    cout << result;

    return 0;
}