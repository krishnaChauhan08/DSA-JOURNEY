#include <iostream>
using namespace std;
bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    bool prime = checkPrime(2);
    if (prime)
    {
        cout << "number is prime" << endl;
    }
    else
    {
        cout << "not prime";
    }
    return 0;
}