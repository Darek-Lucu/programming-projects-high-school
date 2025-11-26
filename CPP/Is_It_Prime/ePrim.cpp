#include <iostream>
using namespace std;

bool ePrim(int n)
{ // Is Prime function, checks if a number is prime (efficient!)
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int number;

    cout << "Write a number to check if it is prime: ";
    cin >> number;

    if (ePrim(number))
    {
        cout << number << " is prime :)";
    }
    else
        cout << number << " is not prime :(";
    return 0;
}