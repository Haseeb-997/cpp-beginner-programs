#include <iostream>
using namespace std;

int prime(int a)
{
    int isPrime = 1;
    // for less iteration and fast result, we use i <= sqr(n)
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main()
{
    cout << "***Prime and Composite Number Checker***\n";
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "The number is niether prime nor composite" << endl;
    }
    else
    {
        prime(n);
        // after the end of prime()
        if (prime(n))
        {
            cout << "This is a prime number" << endl;
        }
        else
        {
            cout << "This is a composite number" << endl;
        }
    }
    system("pause");
    return 0;
}