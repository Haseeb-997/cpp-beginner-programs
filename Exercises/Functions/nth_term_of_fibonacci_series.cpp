#include <iostream>
using namespace std;

int fib(int a)
{
    if (a == 1)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}

int main()
{
    cout << "\nProgram that will tell you the nth term of \"fibonacci series\"\n\n";
    int n;
    while (true)
    {
        cout << "Enter the value of n: ";
        cin >> n;

        if (n <= 0)
        {
            cout << "\nInvalid Number!\nEnter a valid number\n\n";
        }
        else
        {
            cout << "\nThe " << n << " term of Fibonacci Series is " << fib(n) << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
